#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string			type;
	public:
		AMateria();//default
		virtual ~AMateria();
		AMateria(std::string const & type);//constructor with string input
		AMateria(AMateria const &obj);//copy constructor
 		AMateria& operator=(AMateria const &obj);// copy assignment operator

		std::string const	&getType()const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};



#endif