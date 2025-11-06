#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{	
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		void	setName(std::string f_name);
		void	setlast_name(std::string last);
		void	setnickname(std::string nick);
		void	setphone_number(std::string phone);
		void	setSecret(std::string secret);
		std::string	getName();
		std::string	getlast_name();
		std::string	getnickname();
		std::string	getphone_number();
		std::string	getSecret();
		void	trunc_str();
		Contact(){}
		~Contact(){}
};

#endif