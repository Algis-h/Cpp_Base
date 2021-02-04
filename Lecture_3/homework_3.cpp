#include <iostream>
#include "var.h" //for task 3




int main()
{
	// task 1
	int a = 3;
	int b = 5;
	int c = 23;
	int d = 2;
	float result_1 = a * (b + (float(c) / d));
	std::cout << "Task_1\tresult: \t" << result_1 << std::endl;
	
	//task 2
	int e = 27;
	int result_2 = (e > 21)?(e - 21) * 2:e - 21;
	std::cout << "Task_2\tresult: \t" << result_2 << std::endl;

	// task 3
	
	extern int f;
	extern int g;
	extern int h;
	extern int i;


	float result_3 = f * (g + (float(h) / i));
	std::cout << "Task_3\tresult: \t" << result_3 << std::endl;

	// task 4

	int arr[3][3][3];
	arr[1][1][1] = 5;
	int* p;
	//p = reinterpret_cast <int*>(arr);
	p = &arr[0][0][0];

	std::cout << "Task_4\tresult:\t" << *(p + 13) << std::endl;


	return 0;
}