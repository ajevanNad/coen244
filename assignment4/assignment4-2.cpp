
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	double totalCost = 0;//variable to store the total cost of all the packages in the vector
	vector <Package*> packages;//vector of Package pointers

	packages.push_back(new Package("Tom Hanks", "345 Henry street", "Montreal", "QC", "J4G 9F7",
			"Barry Allen", "8354 rue Decelle", "Miami", "FL", "K5H 9S7",
			200, 12.50));

	packages.push_back(new TwoDayPackage("Emma Watson", "9834 Funny street", "Boston", "MS", "L2H 4V8",
			"Floyd May", "95833 Bay street", "Hollywood", "LA", "D8E 4H6",
			73, 10, 5.99));

	packages.push_back(new OvernightPackage("Bruce Wayne", "10 Manoir street", "New York City", "NY", "3HB542",
			"Phil Coulson", "8786 Secret boulevard", "Colorado", "OH", "34H J5K",
			62, 3.30,50));

	for (int i = 0; i < 3; i++){//loop through and display package info
		cout << "Sender:" << endl;
		cout << "       " << packages[i]->getSname() << endl;
		cout << "       " << packages[i]->getSaddress() << endl;
		cout << "       " << packages[i]->getScity() << endl;
		cout << "       " << packages[i]->getSstate() << endl;
		cout << "       " << packages[i]->getSzip() << endl << endl;

		cout << "Recipient:" << endl;
		cout << "         " << packages[i]->getRname() << endl;
		cout << "         " << packages[i]->getRaddress() << endl;
		cout << "         " << packages[i]->getRcity() << endl;
		cout << "         " << packages[i]->getRstate() << endl;
		cout << "         " << packages[i]->getRzip() << endl << endl;

		cout << "Package cost: $" << packages[i]->calculateCost() << endl;
		cout << "********************************************************" << endl;

		totalCost += packages[i]->calculateCost();
	}

	cout << "Total shipping cost: $" << totalCost << endl;

	for (int i = 0; i < 3; i++){//loop through and delete the pointers
		delete packages[i];
	}
	packages.clear();

	return 0;
}
