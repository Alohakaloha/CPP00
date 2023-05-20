#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(WrongAnimal const &);
		std::string	getType()const;
		void		setType();
		void		makeSound()const;
	protected:
		std::string	type;
};
#endif

