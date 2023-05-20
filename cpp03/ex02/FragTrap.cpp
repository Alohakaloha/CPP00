#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap	&copyFrom){
	this->_name = copyFrom.getName();
	this->_attackDmg = copyFrom.getAttackDmg();
	this->_energyPoints = copyFrom.getEnergyPoints();
	this->_hitPoints = copyFrom.getHitPoints(); 
	std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;
}

FragTrap & FragTrap:: operator= (const FragTrap &copyFrom){
	this->_name = copyFrom.getName();
	this->_attackDmg = copyFrom.getAttackDmg();
	this->_energyPoints = copyFrom.getEnergyPoints();
	this->_hitPoints = copyFrom.getHitPoints(); 
	return *this;
}

FragTrap::~FragTrap(){
	std::cout <<"\033[31m" << this->_name << " deconstructor is called\033[0m" << std::endl;
}

void	FragTrap::highFiveGuys(){
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
		std::cout << this->getName() << " is now asking for some high fives!!! " << std::endl;
	else
		std::cout << this->getName() << " is unable to give high fives :( " << std::endl;
}