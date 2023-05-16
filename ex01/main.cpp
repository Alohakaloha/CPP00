#include "Contacts.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string	input;
	(void)argv;

	if (argc > 1)
		std::cout << "We ignore more arguments to check with valgrind\n" << std::endl;
	std::cout << "\x1b[42mWelcome to this awesome crappy phonebook\x1b[0m" << std::endl;
	std::cout << "\033[36m\nPlease enter your input\033\x1b[0m" << std::endl;
		std::cout << "\033[1;29m[1] ADD - [2] SEARCH - [3] EXIT\033[0;29m"<< std::endl <<std::endl;
	while(std::getline(std::cin, input))
	{
		if (input == "ADD" || input == "1")
		{
			std::cout << "Adding a new contact" << std::endl;
			phonebook.addContact();
		}
		else if (input == "SEARCH" || input == "2")
		{
			std::cout << "Searching for contacts" << std::endl;
			phonebook.searchContact();
		}
		else if (input == "EXIT" || input == "3")
			break;
		/*
			@comment:
			in case of ctrl-d behaviour can be changed to a bool,
			but I would rather catch the control-d signal than make a work around
		*/
		else
			std::cout << "\033[1;31mInput not valid, try again\033[0;27m" << std::endl;
		if (std::cin.eof()){
			std::cout << "\x1b[41m Oh no, something went\x1b[0m" << std::endl;
			break;
		}
		std::cout << "\x1b[36m\nPlease enter your input\x1b[0m" << std::endl;
		std::cout << "\033[1;29m[1] ADD - [2] SEARCH - [3] EXIT\033[0;29m" << std::endl;
	}
	std::cout << "\033[1;31mClosing the crappy phonebook!\033[0;27m" << std::endl;
	return (0);
}
