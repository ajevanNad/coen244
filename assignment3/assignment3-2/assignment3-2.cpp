

#include <iostream>
#include "savingsAccount.h"
using namespace std;

int main() {
	savingsAccount bob(345,0.10);

	bob.setInterestRate(0.15);
	bob.getInterestRate();
	bob.postInterest();

	bob.setAccountNumber(78);
	bob.getAccountNumber();
	bob.getBalance();
	bob.deposit(1278.90);
	bob.withdraw(1270.45);
	bob.print();

	return 0;
}
