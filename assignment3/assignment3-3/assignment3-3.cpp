

#include <iostream>
#include "checkingAccount.h"
using namespace std;

int main() {
	checkingAccount billy;

	billy.print();
	cout << endl;

	billy.setInterestRate(0.25);
	billy.getInterestRate();
	billy.setMinimumBalance(300);
	billy.getMinimumBalance();
	billy.setServiceCharge(0.012);
	billy.getServiceCharge();
	billy.postInterest();
	billy.deposit(200);
	billy.verifyMinimumBalance(100);
	billy.writeCheck(100);
	billy.withdraw(50);

	billy.setAccountNumber(12124);
	billy.getAccountNumber();
	billy.getBalance();

	cout << endl;
	billy.print();
	return 0;
}
