

#include <iostream>
#include "Point.h"
#include "Line.h"
using namespace std;

int main() {
	Point a(3.2,5.53);
	Point b;
	Point c(a);

	b.setPoint(3,4);
	cout << "x coordinate of point b is " << b.getX() << endl;
	cout << "y coordinate of point b is " << b.getY() << endl;
	cout << "The distance between point a and b is " << a.distance(b) <<endl;
	a.print();
	c.print();

	Line l1(a,b);
	l1.lineEquation();
	l1.setLineCoordinates(a,b);

	if(l1.isHorizontalLine()){
		cout << "The line is horizontal" << endl;
	}
	else{
		cout << "The line is not horizontal" << endl;
	}

	if(l1.isVerticalLine()){
		cout << "The line is vertical" << endl;
	}
	else{
		cout << "The line is not vertical" << endl;
	}

	cout << "the slope is " << l1.slope() <<endl;
	l1.getLineCoordinates(b,c);

	return 0;
}
