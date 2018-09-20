/*
 * partTimeEmployee.cpp
 *
 *  Created on: Jul 14, 2017
 *      Author: s_aravan
 */
#include "personType.h"
#include "partTimeEmployee.h"
#include <iostream>
using namespace std;

partTimeEmployee::partTimeEmployee(string fname, string lname, double pay, double hours) { //constructor that sets the first name, last name, pay and hours.
	setName(fname,lname); // this will use the personType member function to set the first and last name which partTimeEmployee has inherited.
	payRate = pay;
	hoursWorked = hours;

}

void partTimeEmployee::setNameRateHours(string fname, string lname, double pay, double hours){ //set the first name, last name, pay and hours.
	setName(fname, lname); // this will use the personType member function to set the first and last name which partTimeEmployee has inherited.
	payRate = pay;
	hoursWorked = hours;

}


double partTimeEmployee::calculatePay() const{ //this will return the calculated pay (wage)

	return (payRate * hoursWorked);

}

void partTimeEmployee:: print() const { //it will print the first name, last name, and total wage.


	cout << "The Part Time Employee's Name Is " << getFirstName() << " " << getLastName() << " " << "Who Earned A Total Wage Of: $" << calculatePay()<< endl;
}

partTimeEmployee::~partTimeEmployee() {
	//Auto-generated destructor stub
}

