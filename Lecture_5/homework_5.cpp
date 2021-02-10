#include <iostream>
#include <cstdarg>
#include "function.h"


void task_1(int* a, int len)
{
	for (int i = 0; i < len; i++)
	{
		a[i] = !a[i];
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
}
/*##########################################################################################*/

void task_2(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		a[i] = i * 3 + 1;
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
}
/*##########################################################################################*/

void task_3(int* a, int len)
{
	bool flag = false;
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += a[i];
	}
	if (sum % 2 == 0)
	{
		int half_sum = 0;
		for (int i = 0; i < len; i++)
		{
			half_sum += a[i];
			if (half_sum >= sum / 2)
			{
				flag = half_sum == (sum / 2);
				break;
			}
		}
	}
	std::cout << flag << std::endl;
}
/*##########################################################################################*/

void task_4(int* a, int len, int shift)
{
	int index;
	int tmp[len];
	for (int i = 0; i < len; ++i)
	{
		tmp[i] = a[i];
	}
	
	/* 	Проверка на отрицательность.
		Странное деление по модулю. 
		При отрицательных числах - отрицательный результат.*/

	shift = shift < 0 ? (abs(shift) % len) : len - (shift % len); 

	for (int i = 0; i < len; i++)
	{
		index = (i + shift) % len;
		a[i] = tmp[index];
		std::cout << a[i] << "\t";
	}
 std::cout << std::endl;
}
/*##########################################################################################*/

void task_5(int a, ...)
{
	va_list arg;
	va_start(arg, a);
	for (int i = 0; i < a; i++)
	{
		std::cout << !va_arg(arg, int) << "\t";
	}
	std::cout << std::endl;
	va_end(arg);
}

int main(int argc, char const *argv[])
{
	// Task 1

	int a[] = {1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1};
	int len_1 = sizeof(a)/sizeof(*a);
	task_1(a, len_1);
	


	// Task 2

	int b[8];
	task_2(b, 8);



	// Task 3

	int c[] = {2, 1, 1, 1, 5};
	int len_3 = sizeof(c)/sizeof(*c);
	task_3(c, len_3);



	// Task 4
	int n = -8;
	int d[] = {1, 2, 3, 4, 5};
	int len_4 = sizeof(d)/sizeof(*d);
	task_4(d, len_4, n);



	// Task 5

	void (*t) (int, ...);
	t = task_5;
	task_5(6, 0, 0, 1, 1, 1, 0);



	// Task 6

	int shift = -8;
	int e[] = {1, 2, 3, 4, 5};
	int len_6 = sizeof(e)/sizeof(*e);
	
	void (*ltask_4)(int*, int, int);
	ltask_4 = h5::task_4;
	ltask_4(e, len_6, shift);



	return 0;
}