/*
 * calendar.h
 *
 *  Created on: Aug 4, 2017
 *      Author: Ajevan
 */

#ifndef CALENDAR_H_
#define CALENDAR_H_

#include <iostream>
using namespace std;

class calendar {
private:
	int month; //variable to hold the month
	int day; //variable to hold the day
	int year; //variable to hold the year

	//array to hold the months in word form
	const string months[13] = {"PLACEHOLDER", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
public:
	calendar();
	friend istream& operator>>(istream&, calendar&);
	friend ostream& operator<<(ostream&, const calendar&);
	int getDay();
	int getMonth();
	int getYear();
	bool checkLeapYear();
	bool checkDay31();
	bool checkDay30();
	bool checkDay28();
	virtual ~calendar();
};

#endif /* CALENDAR_H_ */
