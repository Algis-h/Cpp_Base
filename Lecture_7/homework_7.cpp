#include <iostream>



#define TASK_1(x, y) ((x >= 0 && x <= y) ? true : false)

#define TASK_2(mas, x, y) (*(*(mas + x) + y))

#define TASK_3(x, y) (sizeof(x)/sizeof(y))





int main(int argc, char const *argv[])
{
	// Task 1


	std::cout << TASK_1(9, 7); << std::endl;

	// Task 2

	int** massive;

	int size_x = 5;
	int size_y = 5;

	massive = new int*[size_x];
	for (int i = 0; i < size_x; ++i)
	{
		massive[i] = new int[size_y];
	}

	for (int i = 0; i < size_x; ++i)
	{
		for (int j = 0; j < size_y; ++j)
		{
			massive[i][j] = i * j;
		}
	}
	std::cout << TASK_2(massive, 2, 3) << std::endl;
	delete massive;


	// Task 3
	
	int array[10];
	std::cout << TASK_3(array, int) << std::endl;




	return 0;
}