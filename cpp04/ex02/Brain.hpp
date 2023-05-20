#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
	public:
		Brain(Brain const &);
		Brain& operator=(Brain const &);
		Brain();
		Brain(std::string type);
		~Brain();
		void		setIdea(std::string idea);
		void		setIdea(size_t i, std::string	idea);
		std::string	getIdea(size_t i);
		void		showBrain();
	private:
		std::string	_ideas[100];
};
#endif

