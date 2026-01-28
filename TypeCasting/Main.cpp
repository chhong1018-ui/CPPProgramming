#include <iostream>

void PrintString(char* string)
{
	std::cout << string << "\n";
}

class A 
{
public:
	virtual void test() {}
};
class B : public A
{
public:
};

int main()
{
	const char* name = "Hong";
	PrintString(const_cast<char*>(name));

	int number = 10;
	float floatNumber = static_cast<float>(number);

	A* a = new A();
	B* b = static_cast<B*>(a);		// 잘알고 써야함.
	if (b)
	{
		std::cout << "b is not null\n";
	}
	B* b2 = reinterpret_cast<B*>(a);		// 위험.
	if (b2)
	{
		std::cout << "b2 is not null\n";
	}
	B* b3 = dynamic_cast<B*>(a);
	if (b3)
	{
		std::cout << "b3 is not null\n";
	}

	const type_info& aInfo = typeid(a);
	const type_info& bInfo = typeid(b);
	if (aInfo == bInfo)
	{
		std::cout << "Same\n";
	}
	//std::cout << "Type of a is " << info.name() << "\n";

	delete a;
	std::cin.get();
}