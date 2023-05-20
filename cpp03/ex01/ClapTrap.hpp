#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{
	protected:
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDmg;
		std::string	_name;
	public:
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName()const;
		int		getHitPoints()const;
		int		getEnergyPoints()const;
		int		getAttackDmg()const;
		ClapTrap(void);
		ClapTrap(const ClapTrap	&copyFrom);
		ClapTrap & operator = (ClapTrap const &copyFrom);
		~ClapTrap();
};

#endif