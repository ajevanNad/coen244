/*
 * Line.cpp
 *
 *  Created on: Jul 13, 2017
 *      Author: Ajevan
 */

#include "Line.h"
#include <iostream>
using namespace std;

Line::Line() { //default constructor; doesn't do anything
	// Auto-generated constructor stub

}

Line::Line(Point& p1, Point& p2){ //constructor with initializing the point objects
	a = p1;
	b = p2;

	if((p1.getX() == p2.getX()) && (p1.getY() == p2.getY())){
		cout << "The two points on the line are the same! You should use two different points!" << endl;
	}
}

void Line::setLineCoordinates(Point& p1, Point& p2){ //function to set the two points on the line
	a = p1;
	b = p2;

	if((p1.getX() == p2.getX()) && (p1.getY() == p2.getY())){
		cout << "The two points on the line are the same! You should use two different points!" << endl;
	}
}

void Line::getLineCoordinates(Point& p1, Point& p2){ //function to get the two points on the line
	p1 = a;
	p2 = b;
}

bool Line::isVerticalLine(){ //check if the line is a vertical line
	if (a.getX() == b.getX()){
		return true;
	}
	else{
		return false;
	}
}

bool Line::isHorizontalLine(){ //check if the line is a horizontal line
	if (a.getY() == b.getY()){
		return true;
	}
	else{
		return false;
	}
}

double Line::slope(){ //calculate the slope of the line
	if (!isVerticalLine()){
		return ((b.getY() - a.getY())/(b.getX() - a.getX()));
	}
	else{
		cout << "The slope is UNDEFINED! 1/";
		return 0;
	}
}

void Line::lineEquation(){ //find and output the equation of the line

	cout << "The equation of the line is: ";
	if (!isVerticalLine()){

		if(slope() == 0){
			cout << "y = " << a.getY() - (slope()*a.getX()) << endl;
		}
		else{
			cout << "y = " << slope() << "x + (" << a.getY() - (slope()*a.getX()) << ")" << endl;
		}
	}
	else{
		cout << "x = " << a.getX() << endl;
	}
}

Line::~Line() {
	//Auto-generated destructor stub
}

