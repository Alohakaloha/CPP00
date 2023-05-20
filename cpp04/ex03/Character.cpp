#include "Character.hpp"

Character::Character() : _name("Default character"){
	std::cout << "\x1B[32mDefault Character constructor\033[0m" << std::endl;
	for (int i = 0; i < 4 ; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(std::string name){
	this->_name = name;
	std::cout << this->_name << "\x1B[32m Character Constructor called\033[0m" << std::endl;
	for (int i = 0; i < 4 ; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(Character const &src){
	std::cout << this->_name << "\x1B[32m Copy constructor called\033[0m" << std::endl;
	for (int i = 0; i < 4 ; i++)
	{
		this->_inventory[i] = src._inventory[i]->clone();
	}
}

Character::~Character(){
	std::cout<< this->getName() << "\x1B[32m Deconstructor called\033[0m" << std::endl;
	for (int i = 0; i < 4 ; i++)
	{
		if (this ->_inventory[i])
			delete this->_inventory[i];
	}
}

Character &Character::operator=(Character const &obj){
	this->_name = obj.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return *this;
}

std::string const & Character::getName() const{
	return this->_name;
}


//adds to the next open slot otherwise full!
void	Character::equip(AMateria *m){
	int	i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (i < 4){
		this->_inventory[i] = m;
		std::cout << this->getName() << " \x1B[33mhas equiped a new Materia !\033[0m" << std::endl;
	}
	else
		std::cout << "\x1B[31m" << this->getName() << " inventory is full, can't equip more\033[0m" << std::endl;
}

//unequip does NOT delete the materia
void	Character::unequip(int idx){
	if(this->_inventory[idx]){
		this->_inventory[idx] = NULL;
		std::cout << this->getName() << "\x1B[36m has unequipped one Materia\033[0m" << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target){
	if (idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout <<"\x1B[31m" << idx << " is not valid with the current inventory\033[0m" << std::endl;
}