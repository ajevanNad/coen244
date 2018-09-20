

#include <iostream>
#include <string>
#include "personType.h"
#include "partTimeEmployee.h"
using namespace std;

int main() {
	personType p1;

	p1.setName("James", "Bond"); //the user is enabled to set the first and last name respectively.
	p1.print();//it will allow to print the first  and last name.

	cout << "The personType's First Name:" <<p1.getFirstName() <<endl;//it will print first name.
	cout << "The personType's Last Name: " <<p1.getLastName() << endl;//it will print last name.

	partTimeEmployee e1;

	e1.setNameRateHours("Barry", "Allen", 456, 23); //the user is enabled to set the first name, last name, pay rate and the number of hours, respectively.

	cout << "The calculated wage is: $"<<e1.calculatePay()<<endl; //it will calculate the wage
	e1.print(); // it will print the first name, last name, and wage.

	return 0;
}
