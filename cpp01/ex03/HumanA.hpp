#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA{
	public:
		void attack(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
	private:
		std::string	_name;
		Weapon	&_weaponType;
};

#endif