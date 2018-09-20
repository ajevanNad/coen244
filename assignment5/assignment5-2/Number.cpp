/*
 * Number.cpp
 *
 *  Created on: Aug 5, 2017
 *      Author: Ajevan
 */

#include "Number.h"
#include <iomanip>

istream& operator>>(istream& input, Number& num){ //overload the insertion operator

	input >> setw(4) >> num.temp1;
	input.ignore(1);
	input >> setw(4) >> num.temp2;

	return input;
}

Number::Number(): temp1(0), temp2(0) { //default constructor
}

void Number::toFile(){ //function to find & put all possible words into a file
	for(int i=6; i>2; i--){
		number[i] = temp2 % 10;
		temp2 = temp2 / 10;
	}

	for(int i=2; i>=0; i--){
		number[i] = temp1 % 10;
		temp1 = temp1 / 10;
	}

	for (int i=0; i<7; i++){
		letters[i] = numpad[number[i]][0];
	}

	file.open("outWord.txt");

	try{
		if(!file){
			throw "The file \"outWord.txt\" could not be opened!";
		}

		for(int a=0; a<3; a++){
			for(int b=0; b<3; b++){
				for(int c=0; c<3; c++){
					for(int d=0; d<3; d++){
						for(int e=0; e<3; e++){
							for(int f=0; f<3; f++){
								for(int g=0; g<3; g++){
									for (int i=0; i<7; i++){
										if(letters[i] == 'Q'){
											file << 'R';
										}
										else if(letters[i] == 'R'){
											file << 'S';
										}
										else{
											file << letters[i];
										}
									}
									letters[6] = letters[6] + 1;
									file << endl;
								}
								letters[5] = letters[5] + 1;
								letters[6] = letters[6] - 3;
							}
							letters[4] = letters[4] + 1;
							letters[5] = letters[5] - 3;
						}
						letters[3] = letters[3] + 1;
						letters[4] = letters[4] - 3;
					}
					letters[2] = letters[2] + 1;
					letters[3] = letters[3] - 3;
				}
				letters[1] = letters[1] + 1;
				letters[2] = letters[2] - 3;
			}
			letters[0] = letters[0] + 1;
			letters[1] = letters[1] - 3;
		}

		file.close();
	}

	catch(string& error){
		cout << error << endl;
	}
}

Number::~Number() {
	//  Auto-generated destructor stub
}
