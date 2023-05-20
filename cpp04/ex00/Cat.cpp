#include "Cat.hpp"

Cat::Cat(){
	this->setType();
	std::cout << "\x1b[32mCat constructor called\033[0m" << std::endl;
}

Cat::Cat(Cat const &obj) : Animal(){
	//std::cout << "\x1b[33mCopy constructor called\033[0m" << std::endl;
	*this = obj;
}

Cat::~Cat(){
	std::cout << "\x1b[31mCastructor called\033[0m" << std::endl;
}

Cat& Cat::operator=(Cat const &obj){
	this->_type = obj.getType();
	return *this;
}

void	Cat::setType(){
	this->_type = "Cat";
}

std::string	Cat::getType()const{
	return this->_type;
}

void	Cat::makeSound() const{
	std::cout << "Cat: Purr purr, meow meow this is da cat" << std::endl;
}