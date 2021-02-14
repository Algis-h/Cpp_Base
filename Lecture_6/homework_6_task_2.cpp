#include <iostream>
#include <fstream>


int get_size(std::ifstream &file)
{
	long size;

	file.seekg(0, std::ios::end);
	size = file.tellg();
	file.seekg(0, std::ios::beg);

	return size;
}



void merge_file(std::ofstream &file, char *a, int size)
{
		for (int i = 0; i < size; i++)
	{
		//std::cout << a[i];
		file << a[i];
	}
	
}



int main(int argc, char const *argv[])
{
	int size_1;
	int size_2;

	std::ifstream file_1;
	std::ifstream file_2;
	std::ofstream file_result;

	file_1.open("homework_6_file_1.txt");
	file_2.open("homework_6_file_2.txt");
	file_result.open("homework_6_file_result.txt");
	
	if (!file_1.is_open() || !file_2.is_open())
	{
		std::cout << "File not open!" << std::endl;
		return 1;
	}
	size_1 = get_size(file_1);
	size_2 = get_size(file_2);

	int all_size = size_1 + size_2;

	char* a = new char(all_size);

	for (int i = 0; i < (all_size); i++)
	{
		if (i < size_1)
		{
			file_1.get(a[i]);
		}
		else
		{
			file_2.get(a[i]);
		}
	}
	
	merge_file(file_result, a, all_size);

	file_1.close();
	file_2.close();
	file_result.close();
	
	delete a;

	return 0;
}