#include <iostream>

int main()
{
	char buffer[256];
	FILE* file = nullptr;
	fopen_s(&file, "Test.txt", "rb");
	if (file != nullptr)
	{
		FILE* newFile = nullptr;
		fopen_s(&newFile, "Test2.txt", "wb");
		if (newFile = nullptr)
		{
			while (!feof(file))
			{
				size_t readSize = fread(buffer, sizeof(char), 256, file);
				fwrite(buffer, 1, readSize, newFile);
			}
			fclose(newFile);
		}
		fclose(file);
	}
}