#include "PhoneBook.hpp"

int main()
{
	std::string arg;
	PhoneBook myPhone;
	int updt_index = 0;
	while (1)
	{
		std::cout << "choose ADD or SEARCH or EXIT: ";
		if (!std::getline(std::cin, arg))
		{
			std::cout << std::endl;
			return 1;
		}
		if (arg.compare("EXIT") == 0)
			break;
		if (arg.compare("ADD") == 0)
		{
			myPhone.add(updt_index);
			updt_index++;
			if (updt_index > 7)
				updt_index = 0;
		}
		if (arg.compare("SEARCH") == 0)
		{
			myPhone.search_table();
			myPhone.get_info();
		}
	}
}
