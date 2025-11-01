#pragma once

#include "Contact.hpp"
#include <iostream>
#include <limits>  
#include <iomanip>
#include <iostream>

class PhoneBook
{
	private:
		int		index;
		Contact contact[8];
	public:
		PhoneBook(){}
		~PhoneBook(){}
		void add(int updt_index);
		void search_table();
		void get_info();
};

