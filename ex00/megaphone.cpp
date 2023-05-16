#include <stdlib.h>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
	for (int i = 1; argv[i]; i++)
	{
		for(int j = 0; argv[i][j]; j++)
			argv[i][j] = toupper(argv[i][j]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return (0);
}
