#include "Cat.hpp"

Cat::Cat(){
	this->setType();
	std::cout << "\x1b[32mCat constructor called\033[0m" << std::endl;
	this->_brain = new Brain;
}

Cat::Cat(Cat const &obj) : AAnimal(){
	std::cout << "\x1b[33mCopy constructor called\033[0m" << std::endl;
	*this = obj;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "\x1b[31mCastructor called\033[0m" << std::endl;
}

void	Cat::setIdea(size_t i, std::string idea){
	this->_brain->setIdea(i,idea);
}

Cat& Cat::operator=(Cat const &obj){
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	this->_type = obj.getType();
	*this->_brain = *obj._brain;
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

void	Cat::showBrain(){
	this->_brain->showBrain();
}