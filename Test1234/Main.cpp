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
	Person* person3 = new PartTimeStudent();
	person3->Sleep();

	PartTimeStudent* person1 = new PartTimeStudent();
	person1->Work();
	//person3->Study();  // 오류 발생.
	//person3->Work();   // 오류 발생.
}