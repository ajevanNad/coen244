/*
 * Package.h
 *
 *  Created on: Jul 25, 2017
 *      Author: a_adaraj
 */

#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <string>
#include <iostream>

class Package {
protected:
	std::string sName; //variable to store the sender name
	std::string sAddress; //variable to store the sender address
	std::string sCity;//variable to store the sender city
	std::string sState;//variable to store the sender state
	std::string sZip;//variable to store the sender zip code

	std::string rName;//variable to store the recipient name
	std::string rAddress;//variable to store the recipient address
	std::string rCity;//variable to store the recipient city
	std::string rState;//variable to store the recipient state
	std::string rZip;//variable to store the recipient zip code

	double Weight;//variable to store the weight of the package (in ounces)
	double Cost;//variable to store the cost per ounce
public:
	Package(std::string sname = "",
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
			double cost = 0
			);
	void setSname(std::string);
	std::string getSname() const;
	void setSaddress(std::string);
	std::string getSaddress() const;
	void setScity(std::string);
	std::string getScity() const;
	void setSstate(std::string);
	std::string getSstate() const;
	void setSzip(std::string);
	std::string getSzip() const;

	void setRname(std::string);
	std::string getRname() const;
	void setRaddress(std::string);
	std::string getRaddress() const;
	void setRcity(std::string);
	std::string getRcity() const;
	void setRstate(std::string);
	std::string getRstate() const;
	void setRzip(std::string);
	std::string getRzip() const;

	void setWeight(double);
	double getWeight() const;
	void setCost(double);
	double getCost() const;
	virtual double calculateCost();
	virtual void print() const;
	virtual ~Package();
};

#endif /* PACKAGE_H_ */
