/*
 * checkingAccount.cpp
 *
 *  Created on: Jul 23, 2017
 *      Author: Ajevan
 */

#include "checkingAccount.h"
#include <iostream>

checkingAccount::checkingAccount(int acct, double rate, double minBalance, double chrg): bankAccount(acct), interest(rate), minBal(minBalance), serviceChrg(chrg)
{//constructor which initializes variables and also initializes through the base class constructor
}

void checkingAccount::setInterestRate(double intRate){ //set the interest rate
	interest = intRate;
}

double checkingAccount::getInterestRate() const{ //get the interest rate
	return interest;
}

void checkingAccount::setMinimumBalance(double minBalance){ //set the minimum balance required to waive service charge
	minBal = minBalance;
}

double checkingAccount::getMinimumBalance() const{ //get the minimum balance
	return minBal;
}

void checkingAccount::setServiceCharge(double intRate){ //set the service charge rate
	//the service charge rate must be in decimal form i.e. 5% should be entered as 0.05
	serviceChrg = intRate;
}

double checkingAccount::getServiceCharge() const{ //get the service charge rate
	return serviceChrg;
}

void checkingAccount::postInterest(){ //calculate the new balance with interest
	balance *= (1 + interest);
}

bool checkingAccount::verifyMinimumBalance(double amount){ //function to check if the current balance is greater than or equal to the minimum balance
	if ((balance - amount) < minBal){
		return false; //meaning below minimum balance
	}
	else{
		return true; //meaning above minimum balance
	}
}

void checkingAccount::writeCheck(double amount){ //function to write a check
	//writeCheck calls withdraw function since writing a check is the same thing as withdrawing
	withdraw(amount);
}

void checkingAccount::withdraw(double amount){ //withdraw money from the account
	if (amount <= balance){
		if(!verifyMinimumBalance(amount)){
			std::cout << "Your remaining balance is below the minimum balance. A service charge will be applied." << std::endl;
			balance -= ((balance - amount)*serviceChrg);
		}
		balance -= amount;
	}
	else{
		std::cout << "You do not have sufficient funds!" << std::endl;
		std::cout << "Balance: $" << balance << std::endl;
	}
}

void checkingAccount::print() const{ //display account info
	bankAccount::print();
	std::cout << "Interest rate: " << interest << std::endl;
	std::cout << "Required minimum balance: $" << minBal << std::endl;
	std::cout << "Service charge rate: " << serviceChrg << std::endl;
}

checkingAccount::~checkingAccount() {
	//  Auto-generated destructor stub
}

