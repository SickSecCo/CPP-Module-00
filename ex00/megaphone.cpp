#include <iostream>
#include <cstring>

void lower_to_upper(std::string & str)
{
	for (int i = 0; str[i]; ++i)
		(str)[i] = toupper((str)[i]);
}

int main(int argc, char **argv)
{
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int i = 1; i < argc; i++)
	{
		str = argv[i];
		lower_to_upper(str);
		std::cout << str;
	}
	std::cout << std::endl;
}
