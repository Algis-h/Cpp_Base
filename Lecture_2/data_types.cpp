#include <iostream>
int a;

char b = 'T';
float c = float (a)/2;
char d[9];
enum chip {Empty, X, O};
enum chip e;
enum chip f;
std::string g = "XO_";

int main()
{
	for (int i = 0; i<9; i++)
	{
		d[i] = g[i%3];
	}



	a = 125;
	e = Empty;
	f = X;

	std::cout << "a:" << "\t" << a << "\n" << "b:" << "\t" << b << std::endl;

	std::cout << "c:" << "\t" << c << "\n" << "d:" << "\t" << d << std::endl;

	std::cout << "e:" << "\t" << e << "\n" << "f:" << "\t" << f << std::endl;

	std::cout << "g:" << "\t" << g << "\n" << "f:" << "\t" << f << std::endl;

	return 0;
}