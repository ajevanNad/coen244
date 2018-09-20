/*
 * TwoDayPackage.h
 *
 *  Created on: Jul 27, 2017
 *      Author: Ajevan
 */

#ifndef TWODAYPACKAGE_H_
#define TWODAYPACKAGE_H_

#include "Package.h"

class TwoDayPackage: public Package {
private:
	double flatFee;//variable to store the flat fee
public:
	TwoDayPackage(std::string sname = "",
			std::string saddress = "",
			std::string scity = "",
			std::string sstate = "",
			std::string szip = "",

			std::string rname = "",
			std::string raddress = "",
			std::string rcity = "",
			std::string rstate = "",
			std::string rzip = "",

			double weight = 0,
			double cost = 0,
			double flatfee = 0
			);
	void setfee(double);
	double getfee() const;
	virtual double calculateCost();
	virtual void print() const;
	virtual ~TwoDayPackage();
};

#endif /* TWODAYPACKAGE_H_ */
