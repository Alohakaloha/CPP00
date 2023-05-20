#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon) : _weaponType(newWeapon){
	this->_name = name;
}

HumanA::~HumanA(void){

}

void	HumanA::attack(void){
	std::cout << this->_name << " attacks with their" << this->_weaponType.getType() << std::endl;

}