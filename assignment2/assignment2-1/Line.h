/*
 * Line.h
 *
 *  Created on: Jul 13, 2017
 *      Author: Ajevan
 */

#ifndef LINE_H_
#define LINE_H_

#include "Point.h"

class Line {
private:
	Point a, b; //two Point objects
public:
	Line();
	Line(Point&, Point&);
	void setLineCoordinates(Point&, Point&);
	void getLineCoordinates(Point&, Point&);
	bool isVerticalLine();
	bool isHorizontalLine();
	double slope();
	void lineEquation();
	virtual ~Line();
};

#endif /* LINE_H_ */
