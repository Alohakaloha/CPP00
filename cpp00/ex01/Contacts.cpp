#include "Contacts.hpp"
#include <iomanip>

/* constructor is a special method when an object of a class is created */
Contact::Contact(void) {
/* constructor is called */
	return ;
}

Contact::~Contact(void){
	/* destructor */
	return ;
}


void	Contact::shorten(std::string str){
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	std::cout << std::setfill(' ') << std::setw(10) << str << "|";
}

void	Contact::setFirstName(std::string string){
	this->_firstName = string;
	return ;
}

void	Contact::setLastName(std::string string){
	this->_lastName = string;
	return ;
}

void	Contact::setNickname(std::string string){
	this->_nickName = string;
	return ;
}

void	Contact::setNumber(std::string string){
	this->_phoneNumber = string;
	return ;
}

void	Contact::setSecret(std::string string){
	this->_darkestSecret = string;
	return ;
}

std::string	Contact::getFirstName(){
	return (this->_firstName);
}

std::string	Contact::getLastName(){
	return (this->_lastName);
}

std::string	Contact::getNickName(){
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(){
	return (this->_phoneNumber);
}

std::string	Contact::getSecret(){
	return (this->_darkestSecret);
}
/*
	since we print a string either the getter or the
	member function can access private variables
*/
void	Contact::showContact(){
	std::cout << "First Name: \n" << this->getFirstName() << std::endl;
	std::cout << "Last Name: \n" << this->_lastName << std::endl;
	std::cout << "Nickname: \n" << this->_nickName << std::endl;
	std::cout << "Phone number: \n" << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: \n" << this->_darkestSecret << std::endl;
}