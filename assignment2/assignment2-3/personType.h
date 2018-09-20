/*
 * personType.h
 *
 *  Created on: Jul 14, 2017
 *      Author: Ajevan
 */

#ifndef PERSONTYPE_H_
#define PERSONTYPE_H_

#include <string>
using namespace std;


class personType {

public:

	void print() const;
	void setName(string first, string last);
	string getFirstName() const;
	string getLastName() const;
	personType (string first = "", string last = ""); //constructor is initialized so that there is no use of adding a default constructor
	virtual ~personType();

private:
	string firstName; //variable to store the first name
	string lastName; //variable to store the last name

};

#endif /* PERSONTYPE_H_ */
