#include <iostream>

int main()
{
	char buffer[256];
	FILE* file = nullptr;
	fopen_s(&file, "Test.txt", "rt");
	if (file != nullptr)
	{
		while (!feof(file))
		{
			fgets(buffer, 256, file);
			std::cout << buffer;
		}
		fclose(file);
	}
}