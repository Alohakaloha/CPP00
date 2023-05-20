#include "HumanB.hpp"
# include "Weapon.hpp"
# include <string.h>

HumanB::HumanB(std::string name){
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(){

}

void	HumanB::setWeapon(Weapon &name){
	this->_weapon = &name;
}

//we don't care about grammar and exact same output do we? otherwise add 'their' to ln 21 output
void	HumanB::attack(void){
	if (this->_weapon != NULL)
		std::cout << this->_name << " is attacking with " << this->_weapon->getType() << std::endl;
	else
				std::cout << this->_name << " is attacking with their bare hands" << std::endl;
}