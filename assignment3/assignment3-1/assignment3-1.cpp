

#include <iostream>
#include "bankAccount.h"
using namespace std;

int main() {
	bankAccount barry(123);

	barry.setAccountNumber(3487);
	barry.getAccountNumber();
	barry.getBalance();
	barry.print();
	barry.deposit(323.56);
	barry.withdraw(500);

	return 0;
}
