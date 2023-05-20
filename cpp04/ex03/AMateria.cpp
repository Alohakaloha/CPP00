#include "AMateria.hpp"


AMateria::AMateria() : type("Default"){
	std::cout << "\x1B[35mAMateria type: " << this->type <<" constructor AMateria\033[0m" << std::endl;
}

AMateria::AMateria(std::string const & type){
	this->type = type;
	std::cout<< "\x1B[35m AMateria type: " << this->type <<" constructor AMateria\033[0m" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "\x1B[35mAMateria type: "<< this->type << " deconstructor\033[0m" << std::endl;
}

AMateria & AMateria::operator=(AMateria const &obj){
	std::cout << "\x1B[35mAMateria assignment operator\033[0m" << std::endl;
	this->type = obj.type;
	return *this;
}

std::string const	&AMateria::getType()const{
	return this->type;
}

void	AMateria::use(ICharacter &target){
	std::cout << this->type << " attacks " << target.getName() << std::endl;
}
