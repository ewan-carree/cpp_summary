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

	void loop()
	{
		bool condition = true;
		int i=0;
		while (condition)
		{

			if (i < 4)
			{
				if (i < 3)
				{
					std::cout << i << '-';
				}
				else
				{
					std::cout << i << std::endl;
				}
				
			}
			else
			{
				condition = false;
			}
			i+=1; 
		}

		condition = true;
		do
		{
		    std::cout << "I enter in DO" << std::endl;
		} while (!condition);


		for (int counter = 0 ; counter < 10 ; counter++)
		{
			if (counter < 9)
			{
				std::cout << counter << '-';
			}
			else
			{
				std::cout << counter << std::endl;
			}
			
		}

		std::string my_string = "Hello, world!";

		for(const auto & elem : my_string)
		{
			char basic_end_line = '-';
			if (elem != my_string[my_string.size()-1])
			{
				std::cout << elem << basic_end_line;
			}
			else
			{
				std::cout << elem << std::endl;
			}
			
		}
	}

	void default_argument(std::string name)
	{
		std::cout << "I received this name : " << name << std::endl;
	}

	void pointer()
	{
		    int age = 16;
		    int *ptr(0);
		    ptr = &age;

		    std::cout << "address age : " << &age << ", address pointer on age : " << ptr << ", value of age : " << age << ", value pointed : " << *ptr << std::endl;
		    
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

