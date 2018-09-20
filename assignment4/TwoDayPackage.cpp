/*
 * TwoDayPackage.cpp
 *
 *  Created on: Jul 27, 2017
 *      Author: Ajevan
 */

#include "TwoDayPackage.h"

//constructor
TwoDayPackage::TwoDayPackage(std::string sname,
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
			double flatfee
			):
			Package(sname, saddress, scity, sstate, szip,
					rname, raddress, rcity, rstate, rzip,
					weight, cost)
{
	if(flatfee<0){
		flatFee = 0;
		std::cout << "The flat fee entered is negative! It will be set to zero!" << std::endl;
	}
	else{
		flatFee = flatfee;
	}
}

void TwoDayPackage::setfee(double fee){//set the flat fee
	if(fee<0){
		flatFee = 0;
		std::cout << "The flat fee entered is negative! It will be set to zero!" << std::endl;
	}
	else{
		flatFee = fee;
	}
}

double TwoDayPackage::getfee() const{//get the flat fee
	return flatFee;
}

double TwoDayPackage::calculateCost(){//calculate the shipping cost
	return (flatFee + Package::calculateCost());
}

void TwoDayPackage::print() const{//display the package info
	Package::print();
	std::cout << "Flat fee: $" << flatFee << std::endl;
}

TwoDayPackage::~TwoDayPackage() {
	// Auto-generated destructor stub
}

