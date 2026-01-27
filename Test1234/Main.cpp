#include <iostream>

class Person
{
public:
	void Sleep()
	{
		std::cout << "Sleep\n";
	}
};

class Student : public Person
{
public:
	void Study()
	{
		std::cout << "Study\n";
	}
};

class PartTimeStudent : public Student
{
public:
	void Work()
	{
		std::cout << "Work\n";
	}
};

int main()
{
	Person* person1 = new Person();
	Person* person2 = new Student();
	Person* person3 = new PartTimeStudent();

	person1->Sleep();
	person2->Sleep();
	person3->Sleep();
}