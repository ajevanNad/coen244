/*
 * OvernightPackage.h
 *
 *  Created on: Jul 27, 2017
 *      Author: Ajevan
 */

#ifndef OVERNIGHTPACKAGE_H_
#define OVERNIGHTPACKAGE_H_

#include "Package.h"

class OvernightPackage: public Package {
private:
	double ounceFee;//variable to store the additional fee per ounce
public:
	OvernightPackage(std::string sname = "",
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
			double ouncefee = 0
			);
	void setfee(double);
	double getfee() const;
	virtual double calculateCost();
	virtual void print() const;
	virtual ~OvernightPackage();
};

#endif /* OVERNIGHTPACKAGE_H_ */
