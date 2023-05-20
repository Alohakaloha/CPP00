#include "Zombie.hpp"
#include "iostream"
#include "stdio.h"

int	main()
{
	//multiple arg counter removed to check with valgrind. So in case we ignore it to use valgrind
	int N = 2;
	Zombie	*zombiePtr;
	//we initialize 10 Jasons
	zombiePtr = zombieHorde(N, "Jason");
	// change the condition to see how many Zombies annnounce themselves
		std::cout << "\033[36mThe Zombies now announce themselves\033[0m"<< std::endl;
	for(int i = 0; i < N ; i++)
		zombiePtr[i].announce();
	std::cout << "\033[36mWe now delete the Zombies\033[0m"<< std::endl;
	//long live not low level code ->delete function takes care of it
	delete [] zombiePtr;
	std::cout << "\033[36mEnd of the program\033[0m"<< std::endl;
	return (0);

}