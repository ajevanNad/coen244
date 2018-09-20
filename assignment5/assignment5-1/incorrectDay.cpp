/*
 * incorrectDay.cpp
 *
 *  Created on: Aug 4, 2017
 *      Author: Ajevan
 */

#include "incorrectDay.h"

incorrectDay::incorrectDay(string m) { //constructor to initialize error message
	message = m;

}

string incorrectDay::what(){ //get error message
	return message;
}

incorrectDay::~incorrectDay() {
	//  Auto-generated destructor stub
}

