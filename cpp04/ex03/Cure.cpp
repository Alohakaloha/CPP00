#include "Cure.hpp"

Cure::Cure(){
	std::cout << "\x1B[36mCure default constructor\033[0m" << std::endl;
	this->type = "cure";
}

Cure::Cure(Cure const &obj) : AMateria(){
	std::cout << "\x1B[36mCure copy constructor\033[0m" << std::endl;
	this->type = "cure";
	*this = obj;
}

Cure & Cure::operator=(Cure const &obj){
	this->type = obj.getType();
	return *this;
}

Cure::~Cure()
{
	std::cout <<"\x1B[36mCure deconstructor\033[0m"<< std::endl;
}

Cure *Cure::clone()const{
	return new Cure;
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}