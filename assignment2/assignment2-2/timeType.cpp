/*
 * timeType.cpp
 *
 *  Created on: Jul 14, 2017
 *      Author: Ajevan
 */

#include "timeType.h"
#include <iomanip>

ostream& operator<<(ostream& output, const timeType& time){ //overloading << operator
	output << time.hr << ":" << time.min << ":" << time.sec;
	return output;
}

istream& operator>>(istream& input, timeType& time){ // overloading the >> operator
	input >> setw(3) >> time.hr;
	input.ignore(1);
	input >> setw(3) >> time.min;
	input.ignore(1);
	input >> setw(2) >> time.sec;
	return input;
}

timeType::timeType(int hours, int minutes, int seconds) { //constructor which sets the hours, minutes, and seconds
	if (hours>=0 && hours<24){
		hr = hours;
	}
	else{
		hr = 0;
	}
	if(minutes>=0 && minutes<60){
		min = minutes;
	}
	else{
		min = 0;
	}
	if (seconds>=0 && seconds<60){
		sec = seconds;
	}
	else{
		sec = 0;
	}

}

void timeType::setTime(int hours, int minutes, int seconds){ //function to set the time
	if (hours>=0 && hours<24){
		hr = hours;
	}
	else{
		hr = 0;
	}
	if(minutes>=0 && minutes<60){
		min = minutes;
	}
	else{
		min = 0;
	}
	if (seconds>=0 && seconds<60){
		sec = seconds;
	}
	else{
		sec = 0;
	}
}

void timeType::getTime(int& hours, int& minutes, int& seconds) const{ //function to get the time
	hours = hr;
	minutes = min;
	seconds = sec;
}

timeType timeType::operator++(int){ //overload the pre-increment operator
	if(sec < 59){
		sec++;
	}
	else if(min < 59){
		sec = 0;
		min++;
	}
	else if(hr < 23){
		sec = 0;
		min = 0;
		hr++;
	}
	else{
		sec = 0;
		min = 0;
		hr = 0;
	}
	return *this;
}

bool timeType::operator==(const timeType& otherTime) const{ //overload the equality operator
	if ((hr == otherTime.hr) && (min == otherTime.min) && (sec == otherTime.sec)){
		return true;
	}
	else{
		return false;
	}
}

bool timeType::operator!=(const timeType& otherTime) const{ //overload the not equality operator
	if (!operator==(otherTime)){
		return true;
	}
	else{
		return false;
	}
}

bool timeType::operator<=(const timeType& otherTime) const{ //overload the less than or equal to operator
	int time1 = (hr*60*60) + (min*60) + sec;
	int time2 = (otherTime.hr*60*60) + (otherTime.min*60) + otherTime.sec;

	if (time1 <= time2){
		return true;
	}
	else{
		return false;
	}
}

bool timeType::operator<(const timeType& otherTime) const{ //overload the less than operator
	int time1 = (hr*60*60) + (min*60) + sec;
	int time2 = (otherTime.hr*60*60) + (otherTime.min*60) + otherTime.sec;

	if (time1 < time2){
		return true;
	}
	else{
		return false;
	}
}

bool timeType::operator>=(const timeType& otherTime) const{ //overload the greater than or equal to operator
	if (!operator<(otherTime)){
		return true;
	}
	else{
		return false;
	}
}

bool timeType::operator>(const timeType& otherTime) const{ //overload the greater than operator
	if (!operator<=(otherTime)){
		return true;
	}
	else{
		return false;
	}
}

timeType::~timeType() {
	//Auto-generated destructor stub
}

