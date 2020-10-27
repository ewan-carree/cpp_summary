#ifndef HEADER_HPP
#define HEADER_HPP

#include <vector>
#include <string>
#include <stdexcept> //runtime_error
#include <iostream>
#include <utility> // std::move()

namespace oc
{
	void reference();
	void flows();
	void conditions();
	void loop();
	void default_argument(std::string name = "None");
	void pointer();
	void constructor();

	class Person
	{
		private:
		std::string name;
		int age;

		public:
		Person();
		Person(std::string name, int age);
		~Person();

		int get_age() const;
	};

	
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

#endif //HEADER_HPP