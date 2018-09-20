
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>
using namespace std;

int main() {
	Package fedex("Tom Hanks", "345 Henry street", "Montreal", "QC", "J4G 9F7",
			"Barry Allen", "8354 rue Decelle", "Miami", "FL", "K5H 9S7",
			400, 12.50);

	TwoDayPackage dhl("Emma Watson", "9834 Funny street", "Boston", "MS", "L2H 4V8",
			"Floyd May", "95833 Bay street", "Hollywood", "LA", "D8E 4H6",
			6573, 10, 5.99);

	OvernightPackage ups("Bruce Wayne", "10 Manoir street", "New York City", "NY", "3HB542",
			"Phil Coulson", "8786 Secret boulevard", "Colorado", "OH", "34H J5K",
			562, 23.30,100);

	cout << "The shipping cost for fedex is $" << fedex.calculateCost() << endl;
	cout << "The shipping cost for DHL is $" << dhl.calculateCost() << endl;
	cout << "The shipping cost for UPS is $" << ups.calculateCost() << endl;
	return 0;
}
