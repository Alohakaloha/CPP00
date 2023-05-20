#include "Animal.hpp"

Animal::Animal(){
	std::cout << "\x1b[32mAnimal constructor called\033[0m" << std::endl;
	this->setType();
}

Animal::Animal(Animal const &obj){
	std::cout << "\x1b[33mCopy constructor called\033[0m" << std::endl;
	*this = obj;
}

Animal::~Animal(){
	std::cout << "\x1b[31mAnimal destructor called\033[0m" << std::endl;
}

Animal& Animal::operator=(Animal const &obj){
	//assign obj to this variables!
	std::cout << "\x1b[33mCopy assignment operator called\033[0m" << std::endl;
	this->_type = obj.getType();
	return *this;
}

void	Animal::makeSound() const{
	std::cout << "Random animal noises" << std::endl;
}

void	Animal::setType(){
	this->_type = "random animal";
}

std::string	Animal::getType()const{
	return this->_type;
}