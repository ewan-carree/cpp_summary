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
	void class_person();
	void operators();

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

	class XYZ
	{
	private:
		int x;
		int y;
		int z;

	public:
		XYZ();
		XYZ(int x, int y, int z);

		int get_x() const;
		int get_y() const;
		int get_z() const;

		XYZ& operator+=(const XYZ& b);

	};

	XYZ operator+(XYZ const& a, XYZ const& b);
	bool operator==(XYZ const& a, XYZ const& b);
	std::ostream& operator<<(std::ostream& os, const XYZ& n);

	
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