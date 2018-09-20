/*
 * dayType.cpp
 *
 *  Created on: Jul 9, 2017
 *      Author: Ajevan
 */

#include "dayType.h"
#include <iostream>
#include <string>
using namespace std;

dayType::dayType() { //default constructor
	index = 0;

}

dayType::dayType(string d){ //constructor which initializes the day
	if (d == "Sun"){
		index = 0;
	}
	else if(d == "Mon"){
		index = 1;
	}
	else if (d == "Tues"){
		index = 2;
	}
	else if (d == "Wed"){
		index = 3;
	}
	else if (d == "Thurs"){
		index = 4;
	}
	else if (d == "Fri"){
		index = 5;
	}
	else if (d == "Sat"){
		index = 6;
	}
	else{
		cout << "Invalid day! Day will be set to Sun" << endl;
		index = 0;
	}
}

void dayType::setDay(string d){ //allows the day to be set
	if (d == "Sun"){
		index = 0;
	}
	else if(d == "Mon"){
		index = 1;
	}
	else if (d == "Tues"){
		index = 2;
	}
	else if (d == "Wed"){
		index = 3;
	}
	else if (d == "Thurs"){
		index = 4;
	}
	else if (d == "Fri"){
		index = 5;
	}
	else if (d == "Sat"){
		index = 6;
	}
	else{
		cout << "Invalid day! Changes are not made" << endl;
	}
}

void dayType::printDay() const{ //outputs the day

	cout << days[index] << endl;
}

string dayType::getDay() const{ //returns the day

	return days[index];
}

string dayType::nextDay() const{ //returns the next day
	if (index == 6){ //if its the last day of the week then goes to the beginning of the week
		return days[0];
	}
	else{
		return days[index + 1];
	}
}

string dayType::prevDay() const{ //returns the previous day
	if (index == 0){ //if its the first day of the week then goes to the end of the week
		return days[6];
	}
	else{
		return days[index - 1];
	}
}

string dayType::daysLater(int d) const{ //calculates and returns the day after a certain
										//number of days is added to the current day

	int add_day = d % 7; //to find the actual number of days to add

	if ((index == 1) && (add_day > 5)){ //this and the following if conditions take into account
										//when the end of the week is reached
		add_day = 7 - add_day;
		return days[index - add_day];
	}
	else if ((index == 2) && (add_day > 4)){
		add_day = 7 - add_day;
		return days[index - add_day];
	}
	else if ((index == 3) && (add_day > 3)){
		add_day = 7 - add_day;
		return days[index - add_day];
	}
	else if ((index == 4) && (add_day > 2)){
		add_day = 7 - add_day;
		return days[index - add_day];
	}
	else if ((index == 5) && (add_day > 1)){
		add_day = 7 - add_day;
		return days[index - add_day];
	}
	else if ((index == 6) && (add_day > 0)){
		add_day = 7 - add_day;
		return days[index - add_day];
	}
	else{
		return days[index + add_day];
	}
}

dayType::~dayType() {
	//Auto-generated destructor stub
}

