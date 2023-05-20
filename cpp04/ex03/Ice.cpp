#include "Ice.hpp"

Ice::Ice(){
	std::cout << "\x1B[36mice default constructor\033[0m" << std::endl;
	this->type = "ice";
}

Ice::Ice(Ice const &obj) : AMateria(){
	std::cout << "\x1B[36mice copy constructor\033[0m" << std::endl;
	this->type = "ice";
	*this = obj;
}

Ice & Ice::operator=(Ice const &obj){
	this->type = obj.getType();
	return *this;
}

Ice::~Ice()
{
	std::cout <<"\x1B[36mice deconstructor\033[0m"<< std::endl;
}

Ice *Ice::clone()const{
	return new Ice;
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}