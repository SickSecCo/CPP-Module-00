#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account(int initial_deposit) {
	Account::_displayTimestamp();
	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account(void) {
	Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->checkAmount() << ";";
		std::cout << "closed" << std::endl;
}

void Account::_displayTimestamp(void) {
	time_t	timenow;
	timenow = time(NULL);

	std::cout << std::put_time(std::localtime(&timenow), "[%Y%m%d_%H%M%S] ");
}

int Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}


int Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	//OPERAZIONI riguardo il deposito
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal > checkAmount()) {
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	// std::cout << "deposits:" << this->_nbDeposits << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int Account::checkAmount(void)const {
	return (this->_amount);
}

void Account::displayStatus(void)const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
