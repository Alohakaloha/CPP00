#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap	&copyFrom);
		FragTrap & operator = (FragTrap const &copyFrom);
		~FragTrap();
		void	highFiveGuys();
};


#endif