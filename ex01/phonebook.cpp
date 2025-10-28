#include "phonebook.hpp"
#include <iostream>

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

void	get_data(PhoneBook &myPhone, string input, int index, int x)
{
	if (x == 0)
		myPhone.contact[index].setName(input);
	else if (x == 1)
		myPhone.contact[index].setlast_name(input);
	else if (x == 2)
		myPhone.contact[index].setnickname(input);
	else if (x == 3)
		myPhone.contact[index].setphone_number(input);
	else if (x == 4)
		myPhone.contact[index].setSecret(input);
}

int main()
{
	std::string arg;
	std::string data;
	int i;
	int	index = 0;
	int	updt_index = 0;
	PhoneBook	myPhone;
	
	while (1)
	{
		std::getline(std::cin, arg);
		if (arg.compare("EXIT") == 0)
			break;
		if (arg.compare("ADD") == 0)
		{
			i = 0;
			while (i < 5)
			{
				prompt_field(i);
				std::getline(std::cin, data);
				while (data.empty())
				{
					std::cout << "Fill The Field\n";
					prompt_field(i);
					std::getline(std::cin, data);
				}
				get_data(myPhone, data, updt_index, i);
				i++;
			}
			updt_index++;
			if (index < 8)
				index++;
			if (updt_index > 7)
				updt_index = 0;
			std::cout << "<< SAVED NEW CONTACT >>" << std::endl;
		}
		if (arg.compare("SEARCH") == 0)
		{
			int j = 0;
			while (j < index)
			{
				myPhone.contact[j].trunc_str();
				std::cout << "index " << j << " |";
				std::cout << myPhone.contact[j].getName() << " |";
				std::cout << myPhone.contact[j].getlast_name() << " |";
				std::cout << myPhone.contact[j].getnickname() << std::endl;
				j++;
			}
			int get = 0;
			while (1)
			{
				std::cout << "enter index: ";
				if (!(std::cin >> get) || get >= index || get < 0)
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Invalid Index" << std::endl;
				}
				else
					break;
			}
				prompt_field(0);
				std::cout << myPhone.contact[get].getName() << std::endl;
				prompt_field(1);
				std::cout << myPhone.contact[get].getlast_name() << std::endl;
				prompt_field(2);
				std::cout << myPhone.contact[get].getnickname() << std::endl;
				prompt_field(3);
				std::cout << myPhone.contact[get].getphone_number() << std::endl;
				prompt_field(4);
				std::cout << myPhone.contact[get].getSecret() << std::endl;
			}
			
		} 
}
	
