#include <string>
#include "expression.h"

namespace lungu
{
  bool is_digit(char c)
  {
	  return c >= '0' && c <= '9';
  }

	bool is_letter(char c)
	{
		return c >= 'a' && c <= 'e';
	}

	bool is_unsigned_integer(const std::string &s, size_t &pos)
	{
		if (pos >= s.length() || !is_digit(s[pos]))
		{
			return false;
		}
		pos++;
		if (pos < s.length() & is_digit(s[pos]))
		{
			return is_unsigned_integer(s, pos);
		}
		return true;
	}

	bool is_identifier(const std::string &s, size_t &pos)
	{
		if (pos >= s.length() || !is_letter(s[pos]))
		{
			return false;
		}
		pos++;
		return true;
	}

	bool is_multiplier(const std::string &s, size_t &pos)
	{
		return is_unsigned_integer(s, pos) || is_identifier(s, pos);
	}

	bool is_term(const std::string &s, size_t &pos)
	{
		if (!is_multiplier(s, pos))
		{
			return false;
		}
		if (pos < s.length() && s[pos] == '*')
		{
			pos++;
			return is_term(s, pos);
		}
		return true;
	}

	bool is_expression(const std::string &s, size_t &pos)
	{
		if (!is_term(s, pos))
		{
			return false;
		}
		if (pos < s.length() && (s[pos] == '+' || s[pos] == '-'))
		{
			pos++;
			return is_expression(s, pos);
		}
		return true;
	}

	bool check_expression(const std::string &s)
	{
		size_t pos = 0;
		return is_expression(s, pos) && pos == s.length();
	}


}


