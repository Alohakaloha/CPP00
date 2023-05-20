#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "\x1b[32mAAnimal constructor called\033[0m" << std::endl;
	this->setType();
}

AAnimal::AAnimal(AAnimal const &obj){
	std::cout << "\x1b[33mAAnimal copy constructor called\033[0m" << std::endl;
	*this = obj;
}

AAnimal::~AAnimal(){
	std::cout << "\x1b[31mAAnimal destructor called\033[0m" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const &obj){
	//assign obj to this variables!
	std::cout << "\x1b[33mCopy assignment operator called\033[0m" << std::endl;
	this->_type = obj.getType();
	return *this;
}


void	AAnimal::setType(){
	this->_type = "random animal";
}

std::string	AAnimal::getType()const{
	return this->_type;
}