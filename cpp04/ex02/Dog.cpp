#include "Dog.hpp"

Dog::Dog(){
	this->setType();
	std::cout << "\x1b[32mDog constructor called\033[0m" << std::endl;
	this->_brain = new Brain;
}

Dog::Dog(Dog const &obj) : AAnimal(){
	std::cout << "\x1b[33mCopy constructor called\033[0m" << std::endl;
	*this = obj;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "\x1b[31mDogstructor called\033[0m" << std::endl;
}

void	Dog::setIdea(size_t i, std::string idea){
	this->_brain->setIdea(i,idea);
}

Dog& Dog::operator=(Dog const &obj){
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	this->_type = obj.getType();
	*this->_brain = *obj._brain;
	return *this;
}

void	Dog::setType(){
	this->_type = "Dog";
}

std::string	Dog::getType()const{
	return this->_type;
}

void	Dog::makeSound() const{
	std::cout << "Woof woof, what's up dawg" << std::endl;
}

void	Dog::showBrain(){
	this->_brain->showBrain();
}