/*
 * incorrectMonth.cpp
 *
 *  Created on: Aug 4, 2017
 *      Author: Ajevan
 */

#include "incorrectMonth.h"

incorrectMonth::incorrectMonth(string m) { //constructor to initialize error message
	message = m;

}

string incorrectMonth::what(){ //get error message
	return message;
}

incorrectMonth::~incorrectMonth() {
	//  Auto-generated destructor stub
}

