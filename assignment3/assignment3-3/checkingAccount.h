/*
 * checkingAccount.h
 *
 *  Created on: Jul 23, 2017
 *      Author: Ajevan
 */

#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include "bankAccount.h"

class checkingAccount: public bankAccount {
private:
	double interest; //variable to store the interest rate
	double minBal; //variable to store the minimum balance
	double serviceChrg; //variable to store the service charge rate
public:
	checkingAccount(int acct=0, double rate=0, double minBalance=0, double chrg=0);
	void setInterestRate(double);
	double getInterestRate() const;
	void setMinimumBalance(double);
	double getMinimumBalance() const;
	void setServiceCharge(double);
	double getServiceCharge() const;
	void postInterest();
	bool verifyMinimumBalance(double);
	void writeCheck(double);
	void withdraw(double);
	void print() const;
	virtual ~checkingAccount();
};

#endif /* CHECKINGACCOUNT_H_ */
