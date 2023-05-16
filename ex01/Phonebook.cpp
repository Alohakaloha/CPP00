#include "Phonebook.hpp"
#include <stdlib.h>

/* constructor */
PhoneBook::PhoneBook(void) :  _index(-1), _count(0), _saved(0){
	return ;
}
/* destructor with tilde as identifier */
PhoneBook::~PhoneBook(void){
	return ;
}

//stackoverflow copy for a check of a string if it is numeric
bool isNum(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void	PhoneBook::saved(void){
	if (this->_saved == 1){
		this->_saved = 0;
		if (this->_count < 8)
			this->_count++;
		std::cout << "Contact saved!" << std::endl << std::endl;
		std::cout <<"Current saved numbers " << this->_count << std::endl;
	}
	else
	{
		this->_index--;
		std::cout << "Contact not saved" << std::endl;
	}
	return ;
}

std::string	PhoneBook::getInput(std::string info){
	std::string	input;
	std::cout << info << std::endl;

	while(getline(std::cin, input))
	{
		if (input.size() > 0)
			break ;
		else
			std::cout << "\033[1;31mInput not valid, try again\033[0;27m" << std::endl;
	}
	return (input);
}

std::string	PhoneBook::enterNumber(std::string info){
	std::string	input;
	int			number;

	std::cout << info << std::endl;

	while(getline(std::cin, input))
	{
		if (input.size() > 0 && isNum(input) == true)
		{
			break ;
		}
		else
			std::cout << "\033[1;31mInput not valid, try again\033[0;27m " << std::endl;
	}
	return (input);
}

void	PhoneBook::addContact(void){
	bool		working = true;
	std::string	text;

	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
	text = getInput("Enter first name:");
	this->_contacts[this->_index].setFirstName(text);
	text = getInput("Enter last name:");
	this->_contacts[this->_index].setLastName(text);
	text = getInput("Enter nickname:");
	this->_contacts[this->_index].setNickname(text);
	text = enterNumber("Enter phone number:");
	this->_contacts[this->_index].setNumber(text);
	text = getInput("Enter darkest secret:");
	this->_contacts[this->_index].setSecret(text);
	if (text.size() > 0)
		this->_saved++;
	this->saved();
	return ;
}

void	PhoneBook::searchContact(void){
	int			i;
	std::string	input;

	std::cout << std::setfill('_') << std::setw(45) << "" << std::endl;
	std::cout << "Da Phonebook!\n" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
//	to check the spaces add it
//  std::cout
	for (int j = 0; j < 8; j++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << (j+1) << "|";
		this->_contacts[j].shorten(this->_contacts[j].getFirstName());
		this->_contacts[j].shorten(this->_contacts[j].getLastName());
		this->_contacts[j].shorten(this->_contacts[j].getNickName());
		std::cout << std::endl;

	}
	std::cout << "\nEnter the index or enter [0] - LEAVE" << std::endl;
	while(getline(std::cin, input))
	{
		if (input == "0" || input == "LEAVE")
			return ;
		i = atoi( input.c_str());
		if (i < 1 || i > 9 || i > this->_count )
			std::cout << "\033[1;31mNot valid index\033[0;27m " << std::endl;
		else
			this->_contacts[i - 1].showContact();
		return ;
		
	}
	return ;
}
