/*
 * incorrectYear.h
 *
 *  Created on: Aug 4, 2017
 *      Author: Ajevan
 */

#ifndef INCORRECTYEAR_H_
#define INCORRECTYEAR_H_

#include <iostream>
#include <string>
using namespace std;

class incorrectYear {
private:
	string message; //variable to hold the error message
public:
	incorrectYear(string);
	string what();
	virtual ~incorrectYear();
};

#endif /* INCORRECTYEAR_H_ */
