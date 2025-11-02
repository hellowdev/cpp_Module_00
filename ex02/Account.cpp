#include <iostream>
#include "Account.hpp"



int Account::checkAmount()const
{
	return _amount;
}
void Account::makeDeposit(int deposit)
{
	_nbDeposits = deposit;
}

Account::Account( int initial_deposit )
{
	
	if (_accountIndex < 8)
	{
		_amount = initial_deposit;
		std::cout << "index:" << _accountIndex << ';' << "amout:" << checkAmount() << ';';
		
	}	
    _accountIndex++;
}