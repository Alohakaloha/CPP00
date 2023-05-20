#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		this->_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &obj){
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for(int i = 0; i < 4; i++){
		this->_source[i] = obj._source[i]->clone();
	}
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource deconstructor" << std::endl;
	for (int i = 0; i < 4; i++){
		if (this->_source[i])
			delete this->_source[i];
	}
}

void	MateriaSource::learnMateria(AMateria* newMateria){
	for(int i = 0; i < 4; i++)
	{
		if (this->_source[i] == NULL){
			this->_source[i] = newMateria;
			return ;
		}
	}
	std::cout << "Materia Source is full" << std::endl;
	delete newMateria;
}

AMateria *MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL){
			if (this->_source[i]->getType() == type){
				std::cout << type << "\x1B[32m has been created\033[0m" << std::endl;
				return this->_source[i]->clone();
			}
		}
	}
	std::cout << type << "\033[31m Materia not found!\033[0m" << std::endl;
	return (0);
}