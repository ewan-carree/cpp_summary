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

	void conditions()
	{
		int age = 20;
		if (age == 18)
		{
			std::cout << "You're " << age << " years old!" << std::endl;
		}
		else if (age < 18)
		{
			std::cout << "You don't have the majority" << std::endl;
		}
		else
		{
			std::cout << "You have the majority" << std::endl;
		}

		switch (age)
		{
		case 18:
		std::cout << "You're " << age << " years old!" << std::endl;
		break;

		case 17:
		std::cout << "You're " << age << " years old!" << std::endl;
		break;

		case 20:
		std::cout << "You're " << age << " years old!" << std::endl;
		break;

		default:
		std::cout << "You're not corresponding!" << std::endl;
		break;
		}

		bool person = true;

		if (person && age == 20)
		{
			std::cout << "You're the right Ewan" << std:: endl;
		}

		if (!person || age == 20)
		{
			std::cout << "You are 20 years old or you don't exist" << std::endl;
		}

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

