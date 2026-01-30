#include <iostream>

template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

bool CompareValues(int a, int b)
{
	return a > b;
}

void BubbleSort(int array[], int length, bool (*Compare)(int, int))
{
	for (int ix = 0; ix < length - 1; ++ix)
	{
		for (int jx = 0; jx < length - 1; ++jx)
		{
			if (CompareValues(array[jx], array[jx + 1]))
			{
				Swap<int>(array[jx], array[jx + 1]);
			}
		}
	}
}

void PrintArray(int array[], int length)
{
	for (int ix = 0; ix < length; ++ix)
	{
		std::cout << array[ix];

		if (ix < length - 1)
		{
			std::cout << ", ";
		}
	}
}

int main()
{
	int array[] = { 5, 2, 8, 4, 1 };
	int length = sizeof(array) / sizeof(array[0]);

	BubbleSort(array, length, CompareValues);
}