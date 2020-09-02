#include "header.hpp"

namespace oc
{
	void reference()
	{
		int my_variable = 10;
		int & my_reference = my_variable;
		std::cout << "Here is my_variable : " << my_variable << " and here is my_reference : " << my_reference << std::endl;
	}

	void flows()
	{
		std::string my_variable;
		std::getline(std::cin, my_variable);
		std::cout << my_variable << std::endl;
		std::cerr << "We've got a problem Houston" << std::endl;

	}
} //oc

namespace basics
{

} //basics

namespace sharing
{

} //sharing

namespace structs
{

} //structs

namespace generic
{

} //generic

namespace alloc
{

} //alloc

