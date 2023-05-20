#include "Fixed.hpp"

int main( void ) {
	Fixed const a (20);
	Fixed b( Fixed(3.5f) * Fixed(3) );

	std::cout << "Fixed a = " << a << std::endl;
	std::cout << "Fixed b = " << b << std::endl;
	std::cout << "\nTesting the operators" << std::endl;

	std::cout << "a+b = " << a+b << std::endl;
	std::cout << "a-b = " << a-b << std::endl;
	std::cout << "a/b = " << a/b << std::endl;
	std::cout << "a*b = " << a*b << std::endl;

	std::cout << "b++ = " << b++ <<std::endl;
	std::cout << "Fixed b = " <<b << std::endl;
	std::cout << "++b = " << ++b << std::endl;
	std::cout << "--b = " << --b << std::endl;
	std::cout << "b-- = " << b-- << std::endl;
	std::cout << "\nmax(a , b) looking for the bigger number = " << b.max(a,b) << std::endl;
	std::cout << "min(a , b) looing for the smaller number = " << b.min(a,b) << std::endl;

	std::cout << "\nFixed a = " << a << std::endl;
		std::cout << "Fixed b = " <<b << std::endl;

	if (a < b)
		std::cout << " a is smaller than b" << std::endl;
	else
		std::cout << " b is smaller than a" << std::endl;

	if (a > b)
		std::cout << " a is bigger than b" << std::endl;
	else
		std::cout << " b is bigger than a" << std::endl;

	if (a == b)
		std::cout << " a is equals to b" << std::endl;
	else
		std::cout << " a and b are unequal" << std::endl;

	if (a != b)
		std::cout << " a != b is true" << std::endl;
	else
		std::cout << " a != b is false" << std::endl;

	return 0;
}