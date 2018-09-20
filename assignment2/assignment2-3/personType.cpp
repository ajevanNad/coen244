/*
 * personType.cpp
 *
 *  Created on: Jul 14, 2017
 *      Author: s_aravan
 */

#include "personType.h"
#include <iostream>
#include <string>

using namespace std;

personType::personType(string first, string last) { //constructor that initializes the first and last names
	firstName = first;
	lastName = last;

}

void personType::setName(string first, string last){ //sets the first name and last name

	firstName = first;
	lastName = last;
}

string personType::getFirstName() const{ //allows it to return the first name

	return firstName;
}

string personType::getLastName() const{ // allows it to return the last name

	return lastName;
}

void personType::print() const { // it will allow the first name and the last name to be printed out


	cout << firstName << " " << lastName << endl ;

}


personType::~personType() {
	// Auto-generated destructor stub
}

