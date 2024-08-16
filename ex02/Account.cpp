#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "Account : " << _accountIndex << std::endl
    << "Amount : " << _amount << std::endl
    << "Etat : Created" << std::endl; 
}

Account::~Account(){
    _nbAccounts--;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << "Account : " << _accountIndex << std::endl
    << "Amount : " << _amount << std::endl
    << "Etat : Closed" << std::endl;
}
int Account::getNbAccounts(){
    return _nbAccounts;
}

int	Account::getTotalAmount(){
    return _totalAmount;
}

int	Account::getNbDeposits(){
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals(){
    return _totalNbWithdrawals;
}

void Account::_displayTimestamp(){
   //get the time
    std::cout << "Time Now" << std::endl;
    // std::time_t now = std::time(0);
    // std::tm *ltm = std::localtime(&now);
    // std::cout << "[" << 1900 + ltm->tm_year
    //           << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon
    //           << std::setfill('0') << std::setw(2) << ltm->tm_mday
    //           << "_"
    //           << std::setfill('0') << std::setw(2) << ltm->tm_hour
    //           << std::setfill('0') << std::setw(2) << ltm->tm_min
    //           << std::setfill('0') << std::setw(2) << ltm->tm_sec
    //           << "] ";
}


void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "NbAccounts : " << getNbAccounts() << std::endl
    << "TotaleAmount : " << getTotalAmount() << std::endl
    << "NbDeposits : " << getNbDeposits( )<< std::endl
    << "NbWithdrawls : " << getNbWithdrawals() << std::endl;
}

int Account::checkAmount() const{
    return _amount;
}

void Account::displayStatus() const{
    _displayTimestamp();
    std::cout << "AccountIndex : " << _accountIndex << std::endl
    << "Amount : " << _amount << std::endl
    << "NbDeposits : " << _nbDeposits << std::endl
    << "NbWithdrawals : " << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "AccountIndex : " << _accountIndex << std::endl
    << "Deposit : " << deposit << std::endl
    << "Amount : " << _amount << std::endl
    << "NbDeposits : " << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
    if (withdrawal > _amount){
        _displayTimestamp();
        std::cout << "Account : " << _accountIndex << std::endl
        << "Withdrawal Refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _displayTimestamp();
    std::cout << "AccountIndex : " << _accountIndex << std::endl
    << "Withdrawal : " << withdrawal << std::endl
    << "Amount : " << _amount << std::endl
    << "NbWithdrawals : " << _nbWithdrawals << std::endl;
    return true;
}