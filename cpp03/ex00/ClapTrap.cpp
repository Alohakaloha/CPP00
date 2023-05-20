#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
 _energyPoints(10),_attackDmg(10)
{
	std::cout << "\033[36mClapTrap constructor is called = \033\x1b[0m"<< this->_name << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &copyFrom){
	std::cout << "\033[36mCopy constructor called\033\x1b[0m" <<std::endl;
	*this = copyFrom;
}

ClapTrap & ClapTrap:: operator= (const ClapTrap &copyfrom){
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[36mDeconstructor is called\033\x1b[0m" << std::endl;
}

void	ClapTrap::attack(const std::string &target){
	if (this->_energyPoints  == 0 || this->_hitPoints == 0)
	{
		std::cout << this->_name << " can't do anything" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout << this->_name << " is attacking " << target << ", causing " << this->_attackDmg << " points of damage!"<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	int	number = amount;

	if(this->_energyPoints == 0 || this->_hitPoints == 0)
		std::cout << this->_name << " can't do anything" << std::endl;
	else
		{
			this->_hitPoints += (amount);
			this->_energyPoints--;
			std::cout << this->_name << " is repairing himself \033[32m" << number << "\033\x1b[0m points and has now \033[32m" << this->_hitPoints<< "\033\x1b[0m hitpoints" << std::endl;
		}
}

void	ClapTrap::takeDamage(unsigned int amount){
	int	number = amount;

	if(this->_hitPoints <= 0)
		std::cout << "Oh no " << this->_name << " is already dead" << std::endl;
	else{
		this->_hitPoints -= number;
		std::cout << "Oh no " << this->_name << " is taking \033\x1b[0m" << number << " damage and has \033[32m" << this->_hitPoints << "\033\x1b[0m hitpoints" <<std::endl;
	}
}