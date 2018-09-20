/*
 * savingsAccount.cpp
 *
 *  Created on: Jul 23, 2017
 *      Author: Ajevan
 */

#include "savingsAccount.h"
#include <iostream>

savingsAccount::savingsAccount(int acct, double rate): bankAccount(acct), interest(rate){
// constructor which initializes variables and also initializes through calling the base class constructor
//the interest rate must be in decimal form i.e. 5% should be entered as 0.05
}

void savingsAccount::setInterestRate(double rate){ //set the interest rate
	//the interest rate must be in decimal form i.e. 5% should be entered as 0.05
	interest = rate;
}

double savingsAccount::getInterestRate() const{ //get the interest rate
	return interest;
}

void savingsAccount::postInterest(){ //calculate new balance with interest applied
	balance *= (1 + interest);
}

void savingsAccount::withdraw(double amount){ //withdraw money from account
	//this function is overridden from the base class
	if (amount <= balance){
		balance -= amount;
	}
	else{
		std::cout << "You do not have sufficient funds!" << std::endl;
		std::cout << "Balance: $" << balance << std::endl;
	}
}

void savingsAccount::print() const{ //display account info
	bankAccount::print();
	std::cout << "Interest rate: " << interest << std::endl;
}

savingsAccount::~savingsAccount() {
	//  Auto-generated destructor stub
}

