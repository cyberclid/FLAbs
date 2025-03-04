#include <iostream>
#include "expression.h"

int main()
{
	using namespace lungu;
	std::string test1 = "3*a+b-2";
	std::string test2 = "a+b*c";
	std::string test3 = "5*3+2";
	std::string test4 = "a+b-";
	std::string test5 = "a+b*c-d";

	std::cout << std::boolalpha;
	std::cout << "test1 " << check_expression(test1) << std::endl;
	std::cout << "test2 " << check_expression(test2) << std::endl;
	std::cout << "test3 " << check_expression(test3) << std::endl;
	std::cout << "test4 " << check_expression(test4) << std::endl;
	std::cout << "test5 " << check_expression(test5) << std::endl;

	return 0;
}


