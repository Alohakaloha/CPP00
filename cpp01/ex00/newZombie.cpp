#include "Zombie.hpp"

Zombie	*newZombie(std::string name){

	Zombie	*ptrZombie;

	ptrZombie = new Zombie;

	ptrZombie->giveName(name);
	ptrZombie->announce();
	return(ptrZombie);
}