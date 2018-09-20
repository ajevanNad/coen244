/*
 * incorrectYear.cpp
 *
 *  Created on: Aug 4, 2017
 *      Author: Ajevan
 */

#include "incorrectYear.h"

incorrectYear::incorrectYear(string m) { //constructor to initialize error message
	message = m;

}

string incorrectYear::what(){ //get error message
	return message;
}

incorrectYear::~incorrectYear() {
	//  Auto-generated destructor stub
}

