#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <limits>  
using std::string;

class Contact
{
	private:
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
	public:
		void	setName(string f_name)
		{
			first_name = f_name;
		}
		string	getName()
		{
			return first_name;
		}
		void	setlast_name(string last)
		{
			last_name = last;
		}
		string	getlast_name()
		{
			return last_name;
		}
		void	setnickname(string nick)
		{
			nickname = nick;
		}
		string	getnickname()
		{
			return nickname;
		}
		void	setphone_number(string phone)
		{
			phone_number = phone;
		}
		string	getphone_number()
		{
			return phone_number;
		}
		void	setSecret(string secret)
		{
			darkest_secret = secret;
		}
		string	getSecret()
		{
			return darkest_secret;
		}
		void	trunc_str()
		{
			if (first_name.size() > 10)
				first_name.replace(10, first_name.size() - 10, ".");
			if (last_name.size() > 10)
				last_name.replace(10, last_name.size() - 10, ".");
			if (nickname.size() > 10)
				nickname.replace(10, nickname.size() - 10, ".");
			if (phone_number.size() > 10)
				phone_number.replace(10, phone_number.size() - 10, ".");
			if (darkest_secret.size() > 10)
				darkest_secret.replace(10, darkest_secret.size() - 10, ".");
		}
		Contact(){}
};

class PhoneBook
{
	public:
		Contact contact[8];
};

#endif