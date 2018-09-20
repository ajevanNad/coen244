/*
 * dayType.h
 *
 *  Created on: Jul 9, 2017
 *      Author: Ajevan
 */

#ifndef DAYTYPE_H_
#define DAYTYPE_H_

#include <string>
using namespace std;

class dayType {
private:
	//array to hold the days of the week
	const string days[7] = {"Sun", "Mon", "Tues", "Wed", "Thurs", "Fri", "Sat"};
	int index; //variable to hold the index of the array of the day
public:
	dayType();
	dayType(string);
	void setDay(string);
	void printDay() const;
	string getDay() const;
	string nextDay() const;
	string prevDay() const;
	string daysLater(int) const;
	virtual ~dayType();
};

#endif /* DAYTYPE_H_ */
