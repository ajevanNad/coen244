

#include <iostream>
#include "Number.h"
using namespace std;

int main() {
	Number Num;//object of Number

	cout << "Please enter the phone number for which you would like all possible words (a number that only contains digits between 2 & 9). \nThey will be available in the file \"outWord.txt\". Enter the number in the form of 555-5555:" << endl;
	cin >> Num;

	Num.toFile(); //function which finds and puts all the combinations of words

	return 0;
}
