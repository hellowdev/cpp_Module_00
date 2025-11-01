#include "Contact.hpp"

void Contact::trunc_str()
{
    if (first_name.size() > 9)
      first_name.replace(9, first_name.size() - 9, ".");
    if (last_name.size() > 9)
      last_name.replace(9, last_name.size() - 9, ".");
    if (nickname.size() > 9)
      nickname.replace(9, nickname.size() - 9, ".");
    if (phone_number.size() > 9)
      phone_number.replace(9, phone_number.size() - 9, ".");
    if (darkest_secret.size() > 9)
      darkest_secret.replace(9, darkest_secret.size() - 9, ".");
		
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
