/*
 * calendar.cpp
 *
 *  Created on: Aug 4, 2017
 *      Author: Ajevan
 */

#include "calendar.h"
#include <iomanip>

istream& operator>>(istream& input, calendar& date){ //overload the insertion operator
	input >> setw(3) >> date.month;
	input.ignore(1);
	input >> setw(3) >> date.day;
	input.ignore(1);
	input >> setw(4) >> date.year;

	return input;
}

ostream& operator<<(ostream& output, const calendar& date){ //overload the extraction operator
	output << date.months[date.month] << " " << date.day << ", " << date.year;
	return output;
}

calendar::calendar(): month(1), day(1), year(1900) { //constructor which by default initializes to 1/1/1900
	//  Auto-generated constructor stub

}

int calendar::getDay(){ //get the day
	return day;
}

int calendar::getMonth(){ //get the month
	return month;
}

int calendar::getYear(){ //get the year
	return year;
}

bool calendar::checkLeapYear(){ //check if it is a leap year

	if( ((year%4) == 0) && ((year%100) != 0) ){
		return true;
	}
	else if( ((year%100) == 0) && ((year%400) == 0) ){
		return true;
	}
	else{
		return false;
	}

}

bool calendar::checkDay31(){ //check if it is one of the months with 31 days and that it is within the possible days
	if(
			(month == 1 ||
			month == 3 ||
			month == 5 ||
			month == 7 ||
			month == 8 ||
			month == 10 ||
			month == 12)
			&& (day > 31)){

		return false;
	}
	else{
		return true;
	}
}

bool calendar::checkDay30(){//check if it is one of the months with 30 days and that it is within the possible days
	if(
			(month == 4 ||
			month == 6 ||
			month == 9 ||
			month == 11)
			&& (day > 30)){
		return false;
	}
	else{
		return true;
	}
}

bool calendar::checkDay28(){//check if it is February and that it is within the possible days
	if(month == 2){
		if(checkLeapYear() && (day > 29)){
			return false;
		}
		else if(!checkLeapYear() && (day > 28)){
			return false;
		}
		else{
			return true;
		}
	}
	else{
		return true;
	}
}

calendar::~calendar() {
	//  Auto-generated destructor stub
}

