#ifndef CONTACTS_HPP
#define CONTACTS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Contact
{
	public:
		void			setFirstName(std::string string);
		void			setLastName(std::string string);
		void			setNickname(std::string string);
		void			setNumber(std::string string);
		void			setSecret(std::string string);
		void			shorten(std::string string);
		void			showContact();
		std::string		getFirstName();
		std::string		getLastName();
		std::string		getNickName();
		std::string		getPhoneNumber();
		std::string		getSecret();
		Contact();
		~Contact();
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};



#endif