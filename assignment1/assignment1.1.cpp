
//assignment 1 question 1
#include <iostream>
#include <math.h>
using namespace std;

bool primeTest1(int n){  /*test to make sure that the number's only factors are 1 and
						 itself so that it can be deemed a prime number*/
	bool test;

	if (n == 2){
		test = true;
	}

	else{
		for (int i=2; i<n; i++){
			if (n%i != 0){
				test = true;
			}
			else{
				test = false;
				break;
			}
		}
	}
	return test;
}

bool primeTest2 (int n){ /*second test that tests for prime number using the fact that if
						 n is not divisible by any prime integer less than
 	 	 	 	 	 	 or equal to square root (n) then it is a prime number*/
	bool test;

	if (n ==2 || n==3){
		test = true;
	}

	else{
		for (int i=2; i <= static_cast<int>(sqrt(n)); i++){
			if (primeTest1(i) && (n%i != 0)){
				test = true;
			}
			if (primeTest1(i) && (n%i == 0)){
				test = false;
				break;
			}
		}
	}
	return test;
}

int main() {
	int primeNumbers[1230]; //array to hold prime numbers
	int index, number; //number variable holds the user's input

	for (int i=2; i <= 10007; i++){ // find first 1230 prime numbers
		if (primeTest2(i)){
			primeNumbers[index] = i;
			index++;
		}
	}

	cout << "Enter a number between 2 and 100,000,000 (inclusive):";
	cin >> number;

	if ((number >= 2) && (number <= 100000000)){ //make sure the number is within the range

		if (number <= 10007){ //if number is less than or equal to 10,007 then it may be in
							  //the primeNumber array
			bool test = false; //variable to know if prime number is found

			for (int i=0; i<1230; i++){
				if (primeNumbers[i] == number){
					cout << number << " is a prime number" << endl;
					test = true;
					break;
				}
			}
			if (!test){
				cout << number << " is not a prime number" << endl;

				for (int i=0; i<1230; i++){ //find a prime factor
					if ((number%primeNumbers[i]) == 0){
						cout << "One of the prime factors is " << primeNumbers[i] << endl;
						break;
					}
				}
			}
		}
		else{ //if the number is greater than 10,007 then it is not in the array and must check
			  //if it is divisible by one of the 1230 prime numbers
			bool test = true;

			for (int i=0; i<1230; i++){
				if ((number%primeNumbers[i]) == 0){
					cout << number << " is not a prime number" << endl;

					for (int i=0; i<1230; i++){ //find a prime factor
						if ((number%primeNumbers[i]) == 0){
							cout << "One of the prime factors is " << primeNumbers[i] << endl;
							break;
						}
					}
					test = false;
					break;
				}
			}
			if (test){
				cout << number << " is a prime number" << endl;
			}
		}
	}
	else{
		cout << "The number you entered is out of range!" << endl;
	}

	return 0;
}
