/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:18:26 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/26 10:18:26 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
# include <fstream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

std::string	filename = "log";

/*Public*/
/*************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	static int index = 0;

	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	this->_accountIndex = index;

	Account::_displayTimestamp();

	std::ofstream	ofs(filename, std::ios::out | std::ios::app);

	if (!ofs)
	{
		std::cout << "Error file out" << std::endl;
		exit(0);
	}

	ofs << "] index:" << index++ << ";amount:" << initial_deposit << ";created\n";
	
	this->_nbAccounts += 1;
	this->_totalAmount += initial_deposit;

	ofs.close();
}

/*Destructor*/
/*===============================================================*/

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::ofstream	ofs(filename, std::ios::out | std::ios::app);

	if (!ofs)
	{
		std::cout << "Error file out" << std::endl;
		exit(0);
	}

	ofs << "] index:" << Account::_accountIndex << ";amount:" << Account::_amount \
		<< ";closed" << std::endl;
	ofs.close();

	this->_nbAccounts -= 1;
}


/*===============================================================*/

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

 int	Account::getTotalAmount(void)
{
	 return (Account::_totalAmount);
}

 int	Account::getNbDeposits(void)
{
	 return (Account::_totalNbDeposits);
}

 int	Account::getNbWithdrawals(void)
{
	 return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();

	std::ofstream	ofs(filename, std::ios::out | std::ios::app);
	if (!ofs)
	{
		std::cout << "Error file out" << std::endl;
		exit(0);
	}

	ofs << "] accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount \
		<< ";deposits:" << Account::_totalNbDeposits \
		<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;

	ofs.close();
}

void	Account::makeDeposit(int deposit)
{
	this->_totalAmount += deposit;
	this->_amount += deposit;

	Account::_totalNbDeposits += 1;
	Account::_nbDeposits += 1;
	Account::_displayTimestamp();

	std::ofstream	ofs(filename, std::ios::out | std::ios::app);
	if (!ofs)
	{
		std::cout << "Error file out" << std::endl;
		exit(0);
	}

	ofs << "] index:" << Account::_accountIndex << ";p_amount:" << Account::_amount - deposit\
		<< ";deposits:" << deposit << ";amount:" << Account::_amount\
		<< ";nb_deposits:" << Account::_nbDeposits << std::endl;

	ofs.close();
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount - withdrawal < 0)
	{
		Account::_displayTimestamp();

		std::ofstream	ofs(filename, std::ios::out | std::ios::app);
		if (!ofs)
		{
			std::cout << "Error file out" << std::endl;
			exit(0);
		}

		ofs << "] index:" << Account::_accountIndex << ";p_amount:" << Account::_amount \
			<< ";withdrawal:refused" << std::endl;

		ofs.close();

		return (0);
	}
	else
	{
		this->_totalAmount -= withdrawal;
		this->_amount -= withdrawal;

		Account::_totalNbWithdrawals += 1;
		Account::_nbWithdrawals += 1;
		Account::_displayTimestamp();

		std::ofstream	ofs(filename, std::ios::out | std::ios::app);
		if (!ofs)
		{
			std::cout << "Error file out" << std::endl;
			exit(0);
		}

		ofs << "] index:" << Account::_accountIndex << ";p_amount:" << Account::_amount + withdrawal \
			<< ";withdrawal:" << withdrawal << ";amount:" << Account::_amount \
			<< ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;

		ofs.close();
	}

	return (1);
}

 int	Account::checkAmount(void) const
 {
	 return (this->_amount);
 }

 void	Account::displayStatus(void) const
 {
	 Account::_displayTimestamp();
	 std::ofstream	ofs(filename, std::ios::out | std::ios::app);
	 if (!ofs)
	 {
		 std::cout << "Error file out" << std::endl;
		 exit(0);
	 }

	 ofs << "] index:" << Account::_accountIndex << ";amount:" << Account::_amount \
		 << ";deposits:" << Account::_nbDeposits \
		 << ";withdrawals:" << Account::_nbWithdrawals << std::endl;

	 ofs.close();
	
 }


/*Private*/
/*************************************************************************************************/

								/*Constructor*/
/*===============================================================*/
Account::Account(void) : _amount(0)
{
	static int index = 0;

	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	this->_accountIndex = index;
	Account::_displayTimestamp();

	std::ofstream	ofs(filename, std::ios::out | std::ios::app);

	if (!ofs)
	{
		std::cout << "Error file out" << std::endl;
		exit(0);
	}

	ofs << "] index:" << index++ << ";amount:0" << ";created" << std::endl;
	ofs.close();
	
	this->_nbAccounts += 1;
	this->_totalAmount += 0;
}

/*===============================================================*/

void	Account::_displayTimestamp(void)
{
	time_t rawtime;
	struct tm* timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, 80, "%Y%m%d-%H%M%S", timeinfo);

	std::ofstream	ofs(filename, std::ios::out | std::ios::app);

	if (!ofs)
	{
		std::cout << "Error file out" << std::endl;
		exit(0);
	}

	ofs << "[" << buffer;

	ofs.close();
}

/*
	rem :
	_nbAccounts   ||  this->_nbAccounts   ||  Account::_nbAccounts    ????
*/