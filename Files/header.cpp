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

	void class_person()
	{
		Person p("Juan", 20);
		std::cout << p.get_age() << std:: endl;
	}

	Person::Person() : name("Jean"), age(10) {}
	Person::Person(std::string name, int age) : name(name), age(age) {}

	Person::~Person()
	{
		std::cout << "Object deleted" << std::endl;
	}

	int Person::get_age() const
	{
		return age;
	}

	std::string Person::get_name() const
	{
		return name;
	}

	void operators()
	{
		XYZ a{}, b{1,1,1};
		auto c = a + b;
		auto result = a == b;
		std::cout << result << std::endl;
		std::cout << c << std::endl;
		c += a;
		std::cout << c << std::endl;
	}

	XYZ::XYZ() : x(10), y(10), z(10) 
	{

	}

	XYZ::XYZ(int x, int y, int z) : x(x), y(y), z(z) 
	{

	}

	int XYZ::get_x() const
	{
		return x;
	}

	int XYZ::get_y() const
	{
		return y;
	}

	int XYZ::get_z() const
	{
		return z;
	}

	XYZ operator+(XYZ const& a, XYZ const& b)
	{
		return XYZ(a.get_x() + b.get_x(), a.get_y() + b.get_y(), a.get_z() + b.get_z());
	}

	bool operator==(XYZ const& a, XYZ const& b)
	{
		return (a.get_x() == b.get_x() && a.get_y() == b.get_y() && a.get_z() == b.get_z());
	}

	XYZ& XYZ::operator+=(const XYZ& b)
	{
		x += b.x;
		y += b.y;
		z += b.z;

		return *this;
	}

	std::ostream& operator<<(std::ostream& os, const XYZ& n)
	{
		os << "(";
		os << n.get_x();
		os << ';';
		os << n.get_y();
		os << ';';
		os << n.get_z();
		os << ")";
		return os;
	}

	std::ostream& operator<<(std::ostream& os, const Person& n)
	{
		os << n.get_name() << " is " << n.get_age() << std::endl;
		return os;
	}

	std::ostream& operator<<(std::ostream& os, const Student& n)
	{
		os << n.get_name() << " is " << n.get_age() << " and the classroom is " << n.get_grade() << std::endl;
		return os;
	}


	void inheritance()
	{
		Student s, s1{"Juan", 15, "BAC+2"};
		std::cout << s1 << std::endl;
	}

	Student::Student() : Person::Person("Ewan", 20), grade("Bac+3") {}

	Student::Student(std::string name, int age, std::string grade) : Person::Person(name, age), grade(grade) {}
	
	std::string Student::get_grade() const
	{
		return grade;
	}

	void Student::presentation() const
	{
		std::cout << "Student - " << *this << std::endl;
	}

	void Person::presentation() const
	{
		std::cout << "Person - " << *this <<  std::endl;
	}

	void display(Person const& p)
	{
		p.presentation();
	}

	void virtual_method()
	{
		Person p;
		Student s;
		display(p);
		display(s);
	}

	void Student::description()
	{
		std::cout << "A student is inside the school" << std::endl;
	}

	void static_method()
	{
		Student::description();
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

