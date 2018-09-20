/*
 * Point.cpp
 *
 *  Created on: Jul 13, 2017
 *      Author: Ajevan
 */

#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

Point::Point() { //default constructor
	x = 0;
	y = 0;

}

Point::Point(Point& a){ //copy constructor
	x = a.x;
	y = a.y;
}

Point::Point(double a, double b){ //constructor with parameters
	x = a;
	y = b;
}

void Point::setPoint(double a, double b){ //function to set the point
	x = a;
	y = b;
}

double Point::getX() const{ //function to get the x coordinate
	return x;
}

double Point::getY() const{ //function to get the y coordinate
	return y;
}

void Point::print() const{ //displays the x and y coordinates
	cout << "(" << x << "," << y << ")" << endl;
}

double Point::distance(const Point& point){ //calculates the distance between two points
	return (sqrt( pow((point.x - x) , 2) + pow((point.y - y) , 2) ));
}

Point::~Point() {
	// Auto-generated destructor stub
}

