#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(){
	this->setType();
	std::cout << "\x1b[32mDefault WrongAnimal constructor called\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj){
	std::cout << "\x1b[33mWrong Animal Copy constructor called\033[0m" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "\x1b[31mWrong Animal destructor called\033[0m" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &obj){
	//assign obj to this variables!
	std::cout << "\x1b[33mCopy assignment operator called\033[0m" << std::endl;
	this->type = obj.getType();
	return *this;
}

void	WrongAnimal::makeSound() const{
	std::cout << "Random WrongAnimal noises" << std::endl;
}

void	WrongAnimal::setType(){
	this->type = "random WrongAnimal";
}

std::string	WrongAnimal::getType()const{
	return this->type;
}