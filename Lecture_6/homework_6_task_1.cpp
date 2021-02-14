#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

void create_fill_file(char const file_name[], int seed = 5)
{
	std::ofstream file;
	file.open(file_name);
	file << file_name << "\n";

	std::srand(seed);

	for (int i = 0; i < 100; ++i)
	{
		file << std::rand() % 10;
		
		if ((i + 1) % 10 == 0)
		{
			file << "\n";
		}
	}
	file.close();
}



int main(int argc, char const *argv[])
{
	create_fill_file("homework_6_file_1.txt", 1);
	create_fill_file("homework_6_file_2.txt");
	
	return 0;
}