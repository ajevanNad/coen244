/*
 * savingsAccount.h
 *
 *  Created on: Jul 23, 2017
 *      Author: Ajevan
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include "bankAccount.h"

class savingsAccount: public bankAccount {
private:
	double interest; // variable to store the interest rate
public:
	savingsAccount(int, double rate = 0);
	void setInterestRate(double);
	double getInterestRate() const;
	void postInterest();
	void withdraw(double);
	void print() const;
	virtual ~savingsAccount();
};

#endif /* SAVINGSACCOUNT_H_ */
