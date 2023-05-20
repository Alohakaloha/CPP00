#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
	std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap	&copyFrom) : ClapTrap(){
	this->_name = copyFrom.getName();
	this->_attackDmg = copyFrom.getAttackDmg();
	this->_energyPoints = copyFrom.getEnergyPoints();
	this->_hitPoints = copyFrom.getHitPoints(); 
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap & ScavTrap:: operator= (const ScavTrap &copyFrom){
	this->_name = copyFrom.getName();
	this->_attackDmg = copyFrom.getAttackDmg();
	this->_energyPoints = copyFrom.getEnergyPoints();
	this->_hitPoints = copyFrom.getHitPoints(); 
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout <<"\033[31m" << this->_name << " deconstructor is called\033[0m" << std::endl;
}

void	ScavTrap::guardGate(){
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
		std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
	else
		std::cout << this->getName() << " can't do anything" << std::endl;
}