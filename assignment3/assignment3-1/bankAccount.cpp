/*
 * bankAccount.cpp
 *
 *  Created on: Jul 22, 2017
 *      Author: Ajevan
 */

#include "bankAccount.h"
#include <iostream>
#include <iomanip>

bankAccount::bankAccount(int acct) : accountNum(acct), balance(0) { //constructor which initializes variables


}

void bankAccount::setAccountNumber(int acct){ // to set the account number
	accountNum = acct;
}

int bankAccount::getAccountNumber() const{ //to get the account number
	return accountNum;
}

double bankAccount::getBalance() const{ //to get the balance
	return balance;
}

void bankAccount::deposit(double amount){ //to deposit money into account
	balance += amount;
}

void bankAccount::withdraw(double amount){ //to withdraw money from the account
	if (amount <= balance){
		balance -= amount;
	}
	else{
		std::cout << "You do not have sufficient funds!" << std::endl;
		std::cout << "Balance: $" << balance << std::endl;
	}
}

void bankAccount::print() const{ //display account info
	std::cout << "Account Number: " << accountNum << std::endl;
	std::cout << "Balance: $" <<  std::setprecision(6) << balance << std::endl;
}

bankAccount::~bankAccount() {
	// Auto-generated destructor stub
}

