#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	public:
		Dog();
		Dog(Dog const &);
		~Dog();
		Dog& operator=(Dog const &);
		void		setIdea(size_t i, std::string idea);
		void		setType();
		std::string	getType()const;
		void		makeSound()const;
		void		showBrain();
	private:
		Brain		*_brain;
};
#endif

