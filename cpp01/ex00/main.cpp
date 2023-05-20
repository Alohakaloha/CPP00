#include "Zombie.hpp"
#include "iostream"
#include "stdio.h"

int	main()
{
	//multiple arg counter removed to check with valgrind. So in case we ignore it to use valgrind

	Zombie *zombiePtr;
	std::cout << "\033[36mWe assign the Zombie pointer\033[0m"<< std::endl;
	zombiePtr = newZombie("Jason");
	std::cout << "\033[36mWe call a function that creates a Zombie class\033[0m"<< std::endl;
	randomChump("Simba");
	std::cout << "\033[36mThe access of the member function and the class stays depending on the scope\033[0m" << std::endl;
	zombiePtr->announce();
	std::cout << "\033[36mWe now delete the Zombie pointer\033[0m"<< std::endl;
	delete zombiePtr;
	std::cout << "\033[36mEnd of the program\033[0m"<< std::endl;
	return (0);

}