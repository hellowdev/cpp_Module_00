#include "PhoneBook.hpp"

void	prompt_field(int x)
{
	if (x == 0)
		std::cout << "first name: ";
	else if (x == 1)
		std::cout << "last name: ";
	else if (x == 2)
		std::cout << "nickname: ";
	else if (x == 3)
		std::cout << "phone number: ";
	else if (x == 4)
		std::cout << "darkest secret: ";
}

void	set_data(Contact &contact, std::string input, int x)
{
	if (x == 0)
		contact.setName(input);
	else if (x == 1)
		contact.setlast_name(input);
	else if (x == 2)
		contact.setnickname(input);
	else if (x == 3)
		contact.setphone_number(input);
	else if (x == 4)
		contact.setSecret(input);
}

void PhoneBook::add(int updt_index)
{
	int i = 0;
	std::string data;
	while (i < 5)
	{
		prompt_field(i);
		if (!std::getline(std::cin, data))
		{
			std::cout << std::endl;
			return ;
		}
		while (data.empty())
		{
			std::cout << "Fill The Field\n";
			prompt_field(i);
			if (!std::getline(std::cin, data))
			{
				std::cout << std::endl;
				return ;
			}
		}
		set_data(contact[updt_index], data, i);
		i++;
	}
	if (index < 8)
		index++;
	std::cout << "<< SAVED NEW CONTACT >>" << std::endl;
}

void PhoneBook::search_table()
{
	int j = 0;
	if (j == index)
		std::cout << "Empty Data" << std::endl;
	while (j < index)
	{
		if (j == 0)
		{
			std::cout << std::left << std::setw(10) << "index" << "|";
			std::cout << std::left << std::setw(10) << "first Name" << "|";
			std::cout << std::left << std::setw(10) << "last Name" << "|";
			std::cout << std::left << std::setw(10) << "Nickname" << std::endl;
		}
		std::cout << std::left << std::setw(10) << j << "|";
		contact[j].trunc_str();
		j++;
	}
}

void PhoneBook::get_info()
{
	std::string in;
	int			num;
	while (index)
	{
		std::cout << "enter index: ";
		if (!std::getline(std::cin, in))
		{
			std::cout << std::endl;
			return ;
		}
		if (std::isdigit(in[0]) && in.length() == 1 && std::atoi(in.c_str()) < index)
			break;
		std::cout << "Invalid Index" << std::endl;
	}
	if (index)
	{
		num = std::atoi(in.c_str());
		prompt_field(0);
		std::cout << contact[num].getName() << std::endl;
		prompt_field(1);
		std::cout << contact[num].getlast_name() << std::endl;
		prompt_field(2);
		std::cout << contact[num].getnickname() << std::endl;
		prompt_field(3);
		std::cout << contact[num].getphone_number() << std::endl;
		prompt_field(4);
		std::cout << contact[num].getSecret() << std::endl;
	}
}

	
