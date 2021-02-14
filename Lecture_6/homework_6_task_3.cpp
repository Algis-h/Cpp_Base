#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	
	std::string str;
	char const *path = argv[1];
	char const *word = argv[2];
	bool flag = false;
	//std::cout << path << "\t" << word << std::endl;
	std::ifstream file;
	file.open(path);

	if (file.is_open())
	{
		while(!file.eof())
		{
		getline(file, str);
			if (str == word)
			{
				flag = true;
				break;
			}
			// std::cout << str << std::endl;
		}
		if (flag)
		{
			std::cout << "Слово " << word << " найдено" << std::endl;
		}
		else
		{
			std::cout << "Слово " << word << " не найдено" << std::endl;
		}

	}
	
	file.close();

	return 0;
}