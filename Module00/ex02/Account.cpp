#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;

Account::Account(int initial_deposit) {
	_displayTimestamp();
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::Account() {
	_displayTimestamp();
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	//TODO Print timestamp
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";" << "closed" << std::endl;
}

int Account::getNbAccounts() {
	return (Account::_nbAccounts);
}

int Account::getNbDeposits() {
	return (Account::_totalNbDeposits);
}

int Account::getTotalAmount() {
	return (Account::_totalAmount);
}

int Account::getNbWithdrawals() {
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	//timestamp
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:rejected" << std::endl;
		return (false);
	}
	else {
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	}
	return (true);
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	//TIMESTAMP
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

int Account::checkAmount() const {
	return (this->_amount);
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}

void Account::_displayTimestamp() {
	time_t tmp;
	time(&tmp);
	struct tm *time_formatted;
	time_formatted = gmtime(&tmp);
	std::cout << "[" << std::setfill('0') << time_formatted->tm_year + 1900 << time_formatted->tm_mon << time_formatted->tm_mday << "_" << time_formatted->tm_hour << time_formatted->tm_min << time_formatted->tm_sec << "]";
}