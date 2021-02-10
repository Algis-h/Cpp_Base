namespace h5
{
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
}