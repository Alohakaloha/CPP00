#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(Cat const &);
		~Cat();
		Cat& operator=(Cat const &);
		void		setIdea(size_t i, std::string idea);
		void		setType();
		std::string	getType()const;
		void		makeSound()const;
		void		showBrain();
	private:
		Brain		*_brain;
};
#endif

