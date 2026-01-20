#include <iostream>

//#define Square(x) ( (x) * (x) )
//인라인 함수는 속도 때문.


__forceinline int Square(int x)
{
	return x * x;
}

int main()
{
	auto number = Square(10);
}