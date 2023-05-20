#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	newZombie;

	newZombie.giveName(name);
	newZombie.announce();
}