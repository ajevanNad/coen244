/*
 * incorrectMonth.h
 *
 *  Created on: Aug 4, 2017
 *      Author: Ajevan
 */

#ifndef INCORRECTMONTH_H_
#define INCORRECTMONTH_H_

#include <iostream>
#include <string>
using namespace std;

class incorrectMonth {
private:
	string message; //variable to hold the error message
public:
	incorrectMonth(string);
	string what();
	virtual ~incorrectMonth();
};

#endif /* INCORRECTMONTH_H_ */
