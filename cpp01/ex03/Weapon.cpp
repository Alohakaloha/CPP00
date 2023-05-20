#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
	std::cout << type << " created" << std::endl;
}

Weapon::~Weapon(void){
	std::cout << "Weapon removed" << std::endl;
}

void	Weapon::setType(std::string weaponType){
			this->_type = weaponType;
}

//const functions do not modify the class and allows
//optimization for the compiler (e.g. output is the same, saves computation power) 
std::string Weapon::getType() const {
	return this->_type;
}