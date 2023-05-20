#include "Brain.hpp"

Brain::Brain() {
	std::cout << "\x1b[32mBrain constructor called\033[0m" << std::endl;
}

Brain::Brain(Brain const &obj){
	std::cout << "\x1b[33mCopy constructor called\033[0m" << std::endl;
	*this = obj;
}

Brain::~Brain(){
	std::cout << "\x1b[31m Brain destructor called\033[0m" << std::endl;
}

Brain& Brain::operator=(Brain const &obj){
	//assign obj to this variables!
	std::cout << "\x1b[33mBrain Copy assignment operator called\033[0m" << std::endl;
	if (this == &obj)
		return *this;
	for(size_t i = 0; i < 100; i++)
		this->_ideas[i].assign(obj._ideas[i]);
	return *this;
}


void	Brain::setIdea(std::string	idea){
	int i = 0;
	while (i < 100 && this->_ideas[i].empty() == false)
		i++;
	if (i <= 99){
		this->_ideas[i] = idea;
		return;
	}
	else{
		std::cout << "The head is full, brain can't handle" << std::endl;
		return;
	}
}

void	Brain::setIdea(size_t i, std::string	idea){
	if (i > 100){
		std::cout << "This idea is above my head\n\n" << std::endl;
		return;
	}
	this->_ideas[i] = idea;

}

std::string	Brain::getIdea(size_t i){
	if (i > 100){
		std::cout << "This thought is above my head\n\n" << std::endl;
		return (std::string());
	}
	return this->_ideas[i];
}

void	Brain::showBrain(){

	int i = 0;
	std::cout << "\nThe brain is showing off\n" << std::endl;
	while (i < 100 && this->_ideas[i].empty() == false){
		std::cout << this->getIdea(i) << std::endl;
		i++;
	}
}
