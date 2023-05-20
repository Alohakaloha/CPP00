#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << this->_name << "Zombie has been created" << std::endl;
}

Zombie::~Zombie(){
	std::cout << this->_name << "Zombie has been destroyed" << std::endl;
}

void	Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::giveName(std::string name){
	this->_name = name;
}