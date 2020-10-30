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
	void inheritance();

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
			std::string get_name() const;
			virtual void presentation() const;
	};

	std::ostream& operator<<(std::ostream& os, const Person& n);

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

	class Student : public Person
	{
		private:
			std::string grade;
			friend void secret(Student& s);

		public:
			Student();
			Student(std::string name, int age, std::string grade);

			std::string get_grade() const;
			virtual void presentation() const;
			static void description();

	};

	void display(Person const& p);
	void virtual_method();

	void static_method();
	void friend_method();

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