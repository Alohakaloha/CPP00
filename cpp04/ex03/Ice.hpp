#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(/* args */);
		Ice(Ice const &obj);
		~Ice();
		Ice & operator=(Ice const &obj);

		Ice			*clone() const;
		void		use(ICharacter& target);
};





#endif