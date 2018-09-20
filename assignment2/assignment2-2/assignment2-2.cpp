

#include <iostream>
#include "timeType.h"
using namespace std;

int main() {
	timeType t1(23,58,59);
	timeType t2;
	int h, m, s; //variables to hold the hour, minute, and second when the getTime function is used

	t1.setTime(15, 45, 34);
	cout << "Enter the time in the format hh:mm:ss" << endl;
	cin >> t2;


	t2.getTime(h, m, s);
	cout << h << ":" << m << ":" << s << endl;

	cout << t1 <<endl;
	t1++;
	cout << t1 << endl;

	if (t1 == t2){
		cout << "The two times are equal" << endl;
	}

	if (t1 != t2){
		cout << "The two times are not equal" << endl;
	}

	if (t1 <= t2){
		cout << "t1 is less than or equal to t2" << endl;
	}

	if (t1 < t2){
		cout << "t1 is less than t2" << endl;
	}

	if (t1 >= t2){
		cout << "t1 is greater than or equal to t2" << endl;
	}

	if (t1 > t2){
		cout << "t1 is greater than t2" << endl;
	}
	return 0;
}
