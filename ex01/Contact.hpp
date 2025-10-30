#pragma once

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
		void	setName(std::string f_name)
		{
			first_name = f_name;
		}
		std::string	getName()
		{
			return first_name;
		}
		void	setlast_name(std::string last)
		{
			last_name = last;
		}
		std::string	getlast_name()
		{
			return last_name;
		}
		void	setnickname(std::string nick)
		{
			nickname = nick;
		}
		std::string	getnickname()
		{
			return nickname;
		}
		void	setphone_number(std::string phone)
		{
			phone_number = phone;
		}
		std::string	getphone_number()
		{
			return phone_number;
		}
		void	setSecret(std::string secret)
		{
			darkest_secret = secret;
		}
		std::string	getSecret()
		{
			return darkest_secret;
		}
		void	trunc_str();
		Contact(){}
};

