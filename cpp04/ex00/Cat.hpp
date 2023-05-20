#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(Cat const &);
		~Cat();
		Cat& operator=(Cat const &);
		void		setType();
		std::string	getType()const;
		void		makeSound()const;
};
#endif

