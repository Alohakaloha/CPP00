#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->setType();
	std::cout << "\x1b[32mWrongCat constructor called\033[0m" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj) : WrongAnimal(){
	std::cout << "\x1b[33mCopy constructor called\033[0m" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat(){
	std::cout << "\x1b[31mWrongCatDestructor called\033[0m" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &obj){
	//assign obj to this variables!
	std::cout << "\x1b[33mCopy assignment operator called\033[0m" << std::endl;
	this->type = obj.getType();
	return *this;
}

void	WrongCat::setType(){
	this->type = "Cat";
}

std::string	WrongCat::getType()const{
	return this->type;
}

void	WrongCat::makeSound() const{
	std::cout << "Cat: Purr purr, meow meow this is da cat" << std::endl;
}