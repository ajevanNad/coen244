/*
 * OvernightPackage.cpp
 *
 *  Created on: Jul 27, 2017
 *      Author: Ajevan
 */

#include "OvernightPackage.h"

//constructor
OvernightPackage::OvernightPackage(std::string sname,
		std::string saddress,
		std::string scity,
		std::string sstate,
		std::string szip,

		std::string rname,
		std::string raddress,
		std::string rcity,
		std::string rstate,
		std::string rzip,

		double weight,
		double cost,
		double ouncefee
		):
		Package(sname, saddress, scity, sstate, szip,
				rname, raddress, rcity, rstate, rzip,
				weight, cost)
{
	if(ouncefee<0){
		ounceFee = 0;
		std::cout << "The additional fee per ounce entered is negative! It will be set to zero!" << std::endl;
	}
	else{
		ounceFee = ouncefee;
	}
}

void OvernightPackage::setfee(double fee){//set the additional fee
	if(fee<0){
		ounceFee = 0;
		std::cout << "The additional fee per ounce entered is negative! It will be set to zero!" << std::endl;
	}
	else{
		ounceFee = fee;
	}
}

double OvernightPackage::getfee() const{//get the additional fee
	return ounceFee;
}

double OvernightPackage::calculateCost(){//calculate the shipping cost
	return (Package::calculateCost() + (Weight*ounceFee));
}

void OvernightPackage::print() const{//display the package info
	Package::print();
	std::cout << "Additional fee per ounce: $" << ounceFee << std::endl;
}

OvernightPackage::~OvernightPackage() {
	// Auto-generated destructor stub
}

