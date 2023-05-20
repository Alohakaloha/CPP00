#ifndef Dog_HPP
#define Dog_HPP
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(Dog const &);
		~Dog();
		Dog& operator=(Dog const &);
		void	setType();
		std::string	getType()const;
		void	makeSound()const;
};
#endif

