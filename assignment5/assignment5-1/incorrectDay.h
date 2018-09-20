/*
 * incorrectDay.h
 *
 *  Created on: Aug 4, 2017
 *      Author: Ajevan
 */

#ifndef INCORRECTDAY_H_
#define INCORRECTDAY_H_

#include <iostream>
#include <string>
using namespace std;

class incorrectDay {
private:
	string message; //variable to hold the error message
public:
	incorrectDay(string);
	string what();
	virtual ~incorrectDay();
};

#endif /* INCORRECTDAY_H_ */
