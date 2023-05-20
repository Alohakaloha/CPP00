#include "Dog.hpp"

Dog::Dog(){
	this->setType();
	std::cout << "\x1b[32mDog constructor called\033[0m" << std::endl;
}

Dog::Dog(Dog const &obj) : Animal(){
	//std::cout << "\x1b[33mCopy constructor called\033[0m" << std::endl;
	*this = obj;
}

Dog::~Dog(){
	std::cout << "\x1b[31mDogstructor called\033[0m" << std::endl;
}

Dog& Dog::operator=(Dog const &obj){
	this->_type = obj.getType();
	return *this;
}

void	Dog::setType(){
	this->_type = "Dog";
}

std::string	Dog::getType()const{
	return this->_type;
}

void	Dog::makeSound()const{
	std::cout << "Dog: Woof woof what's up dawg" << std::endl;
}