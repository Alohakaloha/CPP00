#include "Fixed.hpp"

Fixed::Fixed() : _raw(0){
	std::cout << "\033[6;35mDefault constructor called ay\033[0m" << std::endl;
	//this->_raw=0; <- this requires more computational power than in the constructor
}

Fixed::Fixed(const Fixed & copy){
	std::cout << "Copy constructor called" << std::endl;
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