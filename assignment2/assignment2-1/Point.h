/*
 * Point.h
 *
 *  Created on: Jul 13, 2017
 *      Author: Ajevan
 */

#ifndef POINT_H_
#define POINT_H_


class Point {
private:
	double x; //x coordinate
	double y; //y coordinate
public:
	Point();
	Point(Point&);
	Point(double, double);
	void setPoint(double, double);
	double getX() const;
	double getY() const;
	void print() const;
	double distance(const Point&);
	virtual ~Point();

};

#endif /* POINT_H_ */
