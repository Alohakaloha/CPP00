#include "Weapon.hpp"

class	HumanB {
	public:
		void		attack(void);
		void		setType(Weapon &type);
		void		setWeapon(Weapon &name);
		bool		exist(void);
		HumanB(std::string name);
		~HumanB();
	private:
		std::string	_name;
		Weapon		*_weapon;
};