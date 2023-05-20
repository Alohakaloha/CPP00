#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>
/* 
	destructor and constructor are special functions to initialize the object
	
*/
class Zombie{
	public:
		void		announce();
		void		giveName(std::string name);
		Zombie(); // <- constructor
		~Zombie(); // <- destructor
	private:
	// in case we need to access this private variable a member function is needed
		std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif