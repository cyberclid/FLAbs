#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
namespace lungu
{
  bool is_digit(char c);
	bool is_letter(char c);
	bool is_unsigned_integer(const std::string &s, size_t &pos);
	bool is_identifier(const std::string &s, size_t &pos);
	bool is_multiplier(const std::string &s, size_t &pos);
	bool is_term(const std::string &s, size_t &pos);
	bool is_expression(const std::string &s, size_t &pos);
	bool check_expression(const std::string &s);
}

#endif
