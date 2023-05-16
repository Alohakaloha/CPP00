#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include "Contacts.hpp"

class PhoneBook
{
	public:
	std::string	getInput(std::string info);
	std::string	enterNumber(std::string info);
	bool		isNumeric(std::string const &str);
	void		addContact();
	void		searchContact();
	void		saved();
	PhoneBook();
	~PhoneBook();
	private:
		Contact		_contacts[8];
		int			_index;
		int			_count;
		int			_saved;
};


#endif