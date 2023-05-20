#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

/* 	When the function is made virtual, C++ determines which function is to be invoked at the 
	runtime based on the type of the object pointed by the base class pointer. */
class Animal{
	public:
		Animal();
		Animal(Animal const &);
		virtual ~Animal();
		Animal& operator=(Animal const &);
		void		setType();
		std::string	getType()const;
		virtual void	makeSound()const;
	protected:
		std::string	_type;
};
#endif

