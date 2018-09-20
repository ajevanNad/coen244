/*
 * bankAccount.h
 *
 *  Created on: Jul 22, 2017
 *      Author: Ajevan
 */

#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

class bankAccount {
protected:
	int accountNum; //variable to store the account number
	double balance; //variable to store the balance
public:
	bankAccount(int acct = 0);
	void setAccountNumber(int);
	int getAccountNumber() const;
	double getBalance() const;
	void deposit(double);
	void withdraw(double);
	void print() const;
	virtual ~bankAccount();
};

#endif /* BANKACCOUNT_H_ */
