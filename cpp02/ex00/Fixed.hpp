#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

/* This cpp module introduces into the Orthodox Canonical Form
	what's new? ->the copy and copy assignment constructor*/
class	Fixed{
	public:
		Fixed(); //default constructor
		Fixed (const Fixed &copy); //copy constructor
		Fixed & operator = (Fixed const & copy); //copy assignment constructor
		~Fixed(); //deconstructor
		int	getRawBits(void) const;
		void	setRawBits(const int raw);
	private:
		int					_raw;
		static const int	_fractBits = 8;
};

#endif