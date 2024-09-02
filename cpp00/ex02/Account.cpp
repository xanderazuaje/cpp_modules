//
// Created by xander on 8/29/24.
//

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
	std::cout << "Total Accounts: " << _nbAccounts << std::endl;
	std::cout << "Total amount in deposits: " << _totalAmount << std::endl;
	std::cout << "Total deposits made: " << _totalNbDeposits << std::endl;
	std::cout << "Total withdrawals made: " << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_totalNbDeposits++;
	_amount = initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 0;
}

Account::~Account()
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
}

void Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits++;
	_amount += deposit;
	_nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (_amount - withdrawal < 0)
	{
		std::cout << "Cannot withdraw more than what you have." << std::endl;
		return false;
	}
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	return true;
}

int Account::checkAmount() const
{
	return _amount;
}

void Account::displayStatus() const
{
	std::cout << "Account index: " << _accountIndex << std::endl;
	std::cout << "Amount: " << _amount << std::endl;
	std::cout << "Deposits made: " << _nbDeposits << std::endl;
	std::cout << "Wihthdrawals made: " << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	static time_t timer = time(NULL);
	std::cout << ctime(&timer) <<std::endl;
}

Account::Account()
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}
