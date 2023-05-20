#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void	guardGate();
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap	&copyFrom);
		ScavTrap & operator = (ScavTrap const &copyFrom);
		~ScavTrap();
};


#endif