#include <iostream>

// 두 변수의 값을 서로 교환하는 함수.
//template<class T> 원래 이렇게 썼었음. 
// class와 비교하고자 typename으로 바꿈.
template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//void Swap(float& a, float& b)
//{
//	float temp = a;
//	a = b;
//	b = temp;
//}

int main()
{
	int a = 10;
	int b = 20;
	Swap<int>(a, b);

	float floatA = 10.0f;
	float floatB = 20.0f;
	Swap<float>(floatA, floatB);

	std::cin.get();
}