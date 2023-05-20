#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

/* 	When the function is made virtual, C++ determines which function is to be invoked at the 
	runtime based on the type of the object pointed by the base class pointer. */
class AAnimal{
	public:
		AAnimal();
		AAnimal(AAnimal const &);
		virtual ~AAnimal();
		AAnimal& operator=(AAnimal const &);
		void		setType();
		std::string	getType()const;
		virtual void	makeSound()const =0; //a pure virtual function that requires a definition from children classes
	protected:
		std::string	_type;
};
#endif

