/*
 * partTimeEmployee.h
 *
 *  Created on: Jul 14, 2017
 *      Author: s_aravan
 */

#ifndef PARTTIMEEMPLOYEE_H_
#define PARTTIMEEMPLOYEE_H_

#include <iostream>
#include "string"
#include "personType.h"
using namespace std;


class partTimeEmployee: public personType // partTimeEmployee inherits personType.
{
public:

	partTimeEmployee(string fname = " ", string lname = " ", double pay = 0, double hours = 0); /*this constructor will initialize all of
																								its parameters so that you don't need
																								a default constructor*/
	void print() const;
	double calculatePay() const;
	void setNameRateHours(string, string, double, double);
	virtual ~partTimeEmployee();


private:
	double payRate; //variable to hold the pay rate per hour
	double hoursWorked; //variable to hold the number of hours worked

};

#endif /* PARTTIMEEMPLOYEE_H_ */
