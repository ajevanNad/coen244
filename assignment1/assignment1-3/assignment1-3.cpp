
//assignment 1 question 3
#include <iostream>
#include "dayType.h"
using namespace std;

int main() {
	dayType day1; //creating dayType object with default constructor
	dayType day2("Tues"); //creating dayType object initialized to Tuesday
	dayType day3("test"); //creating dayType object with invalid day

	cout << day1.getDay() << endl;
	day1.setDay("Mon");
	day1.printDay();
	cout << day1.nextDay() << endl;
	cout << day1.prevDay() << endl;
	cout << day1.daysLater(4) << endl << endl;


	cout << day2.daysLater(13) << endl;
	day2.setDay("mon");
	day2.printDay();
	day2.setDay("Sat");
	cout << day2.nextDay() << endl;
	day2.setDay("Sun");
	cout << day2.prevDay() << endl << endl;

	day3.printDay();
	return 0;
}
