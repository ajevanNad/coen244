/*
 * Number.h
 *
 *  Created on: Aug 5, 2017
 *      Author: Ajevan
 */

#ifndef NUMBER_H_
#define NUMBER_H_

#include <iostream>
#include <fstream>
using namespace std;

class Number {
private:
	int temp1,temp2; //temporary variables to hold the 1st & 2nd half of the phone number, respectively
	int number[7]; //array to hold the 7 digits of the phone number
	char letters[7]; //array to hold the 1st letter corresponding to each digit of the phone number
	ofstream file; //file variable to output the combinations

	//array to hold the letters corresponding to each digit
	const char numpad[10][3] = {{'-'}, {'-'}, {'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'},
			{'J', 'K', 'L'}, {'M', 'N', 'O'}, {'P', 'R', 'S'}, {'T', 'U', 'V'}, {'W', 'X', 'Y'}};
public:
	Number();
	friend istream& operator>>(istream&, Number&);
	void toFile();
	virtual ~Number();
};

#endif /* NUMBER_H_ */
