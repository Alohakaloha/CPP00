#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

/* This cpp module introduces into the Orthodox Canonical Form
	what's new? ->the copy and copy assignment constructor*/
class	Fixed{
	public:
		Fixed();
		Fixed(const int number);// overload functions to take in either int or float value
		Fixed(const float number);
		Fixed (const Fixed &copy);//copy constructor
		Fixed & operator =  (Fixed const & copy); //copy assignment constructor
		~Fixed(); //deconstructor
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		int		toInt(void)const;
		float	toFloat(void)const;
		
	/*------------operator overloads----------------*/

		Fixed operator+(const Fixed &rhs)const;
		Fixed operator-(const Fixed &rhs)const;
		Fixed operator*(const Fixed &rhs)const;
		Fixed operator/(const Fixed &rhs)const;
		bool operator>(const Fixed &rhs)const;
		bool operator>=(const Fixed &rhs)const;
		bool operator<(const Fixed &rhs)const;
		bool operator<=(const Fixed &rhs)const;
		bool operator==(const Fixed &rhs)const;
		bool operator!=(const Fixed &rhs)const;
		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);
		static Fixed &max(Fixed &lhs, Fixed &rhs);
		static Fixed const &max(const Fixed &lhs , const Fixed &rhs);
		static Fixed &min(Fixed &lhs, Fixed &rhs);
		static Fixed const &min(const Fixed &lhs , const Fixed &rhs);
	private:
		int					_raw;
		static const int	_fractBits = 8;
};

std::ostream	& operator << (std::ostream & o, Fixed const & copy);

#endif