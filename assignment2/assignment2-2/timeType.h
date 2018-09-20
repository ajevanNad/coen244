/*
 * timeType.h
 *
 *  Created on: Jul 14, 2017
 *      Author: Ajevan
 */

#ifndef TIMETYPE_H_
#define TIMETYPE_H_

#include <iostream>
using namespace std;

class timeType {
	friend ostream& operator<<(ostream&, const timeType&);
	friend istream& operator>>(istream&, timeType&);
public:
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const;
	timeType operator++(int); //overload the pre-increment operator
	bool operator==(const timeType&) const; //overload the equality operator
	bool operator!=(const timeType&) const; //overload the not equality operator
	bool operator<=(const timeType&) const; //overload the less than or equal to operator
	bool operator<(const timeType&) const; //overload the less than operator
	bool operator>=(const timeType&) const; //overload the greater than or equal to operator
	bool operator>(const timeType&) const; //overload the greater than operator
	timeType(int hours = 0, int minutes = 0, int seconds = 0);
	virtual ~timeType();

private:
	int hr; //variable to store the hours
	int min; //variable to store the minutes
	int sec; //variable to store the seconds
};

#endif /* TIMETYPE_H_ */
