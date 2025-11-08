#include "Contact.hpp"
#include <iostream>
#include <iomanip>


void Contact::trunc_str()
{
	std::string in;
	
	in = getName();
    if (first_name.size() > 10)
    	in.replace(9, in.size() - 9, ".");
	std::cout << std::left << std::setw(10) << in << "|";
	in = getlast_name();
    if (last_name.size() > 10)
    	in.replace(9, in.size() - 9, ".");
	std::cout << std::left << std::setw(10) << in << "|";
	in = getnickname();
    if (nickname.size() > 10)
      	in.replace(9, in.size() - 9, ".");
	std::cout << std::left << std::setw(10) << in << std::endl;
}

void	Contact::setName(std::string f_name)
{
	first_name = f_name;
}
void	Contact::setlast_name(std::string last)
{
	last_name = last;
}
void	Contact::setnickname(std::string nick)
{
	nickname = nick;
}
void	Contact::setphone_number(std::string phone)
{
	phone_number = phone;
}
void	Contact::setSecret(std::string secret)
{
	darkest_secret = secret;
}
std::string Contact::getName()
{
	return first_name;
}
std::string Contact::getlast_name()
{
	return last_name;
}
std::string Contact::getnickname()
{
	return nickname;
}
std::string Contact::getphone_number()
{
	return phone_number;
}
std::string Contact::getSecret()
{
	return darkest_secret;
}
