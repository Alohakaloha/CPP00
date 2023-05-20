#include "Fixed.hpp"

Fixed::Fixed() : _raw(0){
//	std::cout << "\033[6;35mDefault constructor called\033[0m" << std::endl;
}

//integer overload taking in an integer value
Fixed::Fixed(const int	number){
	this->_raw = number << this->_fractBits;
}

//float overload taking in float value, roundf rounds float value to the nearest int value
Fixed::Fixed(const float	number){
	this->_raw = roundf(number * (1 << this->_fractBits));
}

Fixed::Fixed(const Fixed & copy){
//	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed:: operator=(const Fixed & copy){
	//std::cout << "Copy assignment operator called" << std:: endl;
	this->_raw = copy.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}



int	Fixed::getRawBits(void) const{
//	std::cout << "getRawBits member function called" << std::endl;
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

/*_____________________________operator overloads_____________________________*/

Fixed Fixed::operator+(Fixed const &rhs)const{
	Fixed	ret;
	ret.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (ret);
}

Fixed Fixed::operator-(Fixed const &rhs)const{
	Fixed ret;

	ret.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (ret);
}

Fixed Fixed::operator*(Fixed const &rhs)const{
	Fixed ret;
	
	ret.setRawBits((this->getRawBits() * rhs.getRawBits()) >> this->_fractBits);
	return (ret);
}

Fixed Fixed::operator/(Fixed const &rhs)const{

	return (this->toFloat()/rhs.toFloat());
}

bool Fixed::operator<(Fixed const &rhs)const{
	if (this->_raw < rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>(Fixed const &rhs)const{
	if (rhs._raw < this->getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<=(Fixed const &rhs)const{
	if (rhs._raw > this->_raw)
		return false;
	else
		return true;
}

bool Fixed::operator>=(Fixed const &rhs)const{
	if (rhs.getRawBits() < this->getRawBits())
		return false;
	else
		return true;
}

bool Fixed::operator==(Fixed const &rhs)const{
	if (rhs.getRawBits() == this->getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator!=(Fixed const &rhs)const{
	if (rhs.getRawBits() == this->getRawBits())
		return false;
	else
		return true;
}

Fixed & Fixed::operator++(void) {
	
	this->_raw++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	
	Fixed ret(*this);

	this->_raw++;
	return ret;
}

Fixed & Fixed::operator--(void) {
	
	this->_raw--;
	return *this;
}

Fixed Fixed::operator--(int) {
	
	Fixed ret(*this);

	this->_raw--;
	return ret;
}

Fixed &Fixed::max(Fixed &lhs , Fixed &rhs){
	if (lhs < rhs)
		return rhs;
	else
		return lhs;
}

Fixed const & Fixed::max (Fixed const &lhs, Fixed const &rhs){
	if (lhs < rhs)
		return rhs;
	else
		return lhs;
}

Fixed &Fixed::min(Fixed &lhs , Fixed &rhs){
	if (lhs > rhs)
		return rhs;
	else
		return lhs;
}

Fixed const & Fixed::min (Fixed const &lhs, Fixed const &rhs){
	if (lhs < rhs)
		return rhs;
	else
		return lhs;
}