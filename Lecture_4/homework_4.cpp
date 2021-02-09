#include <iostream>
#include <cmath>

int main()
{
	// Task 1

	int a = 12;
	int b = 3;
	
	int c = a + b;
	
	if (c >= 10 && c <= 20)
	{
		std::cout << "true" << std::endl;
	}else
	{
		std::cout << "false" << std::endl;
	}

	// Task 2

	int d;
	bool flag_2 = true;
	std::cout << "Введите целое цисло больше 1." << std::endl;
	std::cin >> d;

	if (d > 1)
	{
		for (int i = 2; i <= sqrt(d); i++)
		{
			if (d % i == 0)
			{
				flag_2 = false;
				break;
			}
		}
		std::cout << flag_2 << std::endl;
	} else
	{
		std::cout << "Число должно быть больше 1." << std::endl;
	}

	//Task 3

	int e = 3;
	int f = 7;
	
	bool flag_3 = false;

	if (e == 10 || f == 10 || e + f == 10)
	{
		flag_3 = true;
	}
	std::cout << flag_3 << std::endl;

	// Task 4

	int year;
	std::cout << "Введите год:" << std::endl;
	std::cin >> year;
	bool flag_4 = true;
	
	if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0)
	{
		flag_4 = false;
	}
	std::cout << flag_4 << std::endl;


	return 0;
}
