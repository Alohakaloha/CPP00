#include "Fixed.hpp"

Fixed::Fixed(): _raw(0){
	std::cout << "\033[6;35mDefault constructor called\033[0m" << std::endl;
}

//integer overload taking in an integer value
Fixed::Fixed(const int	number){
	this->_raw = number << this->_fractBits;
}

//float overload taking in float value
Fixed::Fixed(const float	number){
	this->_raw = roundf(number * (1 << this->_fractBits));
}

Fixed::Fixed(const Fixed & copy){
	std::cout << "\033[36mCopy constructor called\033\x1b[0m" << std::endl;
	*this = copy;
}

Fixed & Fixed:: operator=(const Fixed & copy){
	std::cout << "Copy assignment operator called" << std:: endl;
	this->_raw = copy.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}



int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void	Fixed::setRawBits(int const raw){
	this->_raw = raw;
}

int	Fixed::toInt(void)const{
	return (this->_raw >> this->_fractBits);
}

float	Fixed::toFloat(void)const{
	return ((float)this->_raw / (256));
}

std::ostream & operator <<(std::ostream &out, Fixed const & copy){
	out << copy.toFloat();
	return (out);
}