

#include <iostream>
#include "calendar.h"
#include "incorrectYear.h"
#include "incorrectMonth.h"
#include "incorrectDay.h"
using namespace std;

int main() {
	calendar Date; //object of calendar

	try{
		cout << "Please enter the date in the form MM-DD-YYYY (i.e 1-23-2017):" << endl;
		cin >> Date;

		if(Date.getYear() < 1900){
			throw incorrectYear("The year entered is less than 1900!");
		}

		if( (Date.getMonth() > 12) || (Date.getMonth() < 1) ){
			throw incorrectMonth("The month you entered is out of scope!");
		}

		if(Date.getDay() < 1){
			throw incorrectDay("The day you entered is less than 1!");
		}

		if(!Date.checkDay28()){
			throw incorrectDay("The day you entered is not applicable for February!");
		}

		if(!Date.checkDay30()){
			throw incorrectDay("The day you entered is not applicable for April, June, September, and November!");
		}

		if(!Date.checkDay31()){
			throw incorrectDay("The day you entered is not applicable for January, March, May, July, August, October, and December!");
		}

		cout << "The date you entered is:" << endl;
		cout << Date << endl;

		if(Date.checkLeapYear()){
			cout << "This year is a leap year!" << endl;
		}
	}

	catch(incorrectYear& error){
		cout << "EXCEPTION: " << error.what() << endl;
	}

	catch(incorrectMonth& error){
		cout << "EXCEPTION: " << error.what() << endl;
	}

	catch(incorrectDay& error){
		cout << "EXCEPTION: " << error.what() << endl;
	}

	return 0;
}
