#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}
int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}
int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::checkAmount()const
{
	return _amount;
}

void Account::_displayTimestamp()
{
	time_t now;
	char buffer[16];
	struct tm *date; // declare var to hold data of time 
	time(&now); // get current time in sec
	date = localtime(&now); // this function set the date struct with each current format-date
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", date);
	std::cout << "[" <<  buffer << "] ";
}

bool Account::makeWithdrawal(int withdrawal)
{
	int old = checkAmount();
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << old 
	<< ";withdrawal:";
	if (_amount - withdrawal >= 0)
	{
		_nbWithdrawals = 1;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		std::cout << withdrawal << ";amount:" << _amount 
		<< ";nb_withdrawals:1" << std::endl;
		_totalNbWithdrawals++;
	}
	else
	{
		_nbWithdrawals = 0;
		std::cout << "refused" << std::endl;
	}
	
	return true;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	int old = checkAmount();
	_amount += deposit;
	_nbDeposits = 1;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";p_amount:" << old
	<< ";deposit:" << deposit << ";amount:" << _amount <<
	";nb_deposits:1" << std::endl;
	_totalNbDeposits++;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() 
	<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
	
}
void Account::displayStatus()const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';' << "amount:" << _amount << ";deposits:"
	<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';' << "amount:" << _amount
	<< ";created" << std::endl;
	_totalAmount += _amount;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';' << "amount:" << _amount
	<< ";closed" << std::endl;
}
