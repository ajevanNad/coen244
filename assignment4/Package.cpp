/*
 * Package.cpp
 *
 *  Created on: Jul 25, 2017
 *      Author: a_adaraj
 */

#include "Package.h"

//constructor
Package::Package(std::string sname,
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
				double cost
				):
				sName(sname),
				sAddress(saddress),
				sCity(scity),
				sState(sstate),
				sZip(szip),

				rName(rname),
				rAddress(raddress),
				rCity(rcity),
				rState(rstate),
				rZip(rzip)
{
	if(weight<0){
		Weight = 0;
		std::cout << "The weight entered is negative! Weight will be set to zero!" << std::endl;
	}
	else{
		Weight = weight;
	}

	if(cost<0){
		Cost = 0;
		std::cout << "The cost per ounce entered is negative! It will be set to zero!" << std::endl;
	}
	else{
		Cost = cost;
	}
}

void Package::setSname(std::string name){//set sender name
	sName = name;
}

std::string Package::getSname() const{//get sender name
	return sName;
}

void Package::setSaddress(std::string address){//set sender address
	sAddress = address;
}

std::string Package::getSaddress() const{//get sender address
	return sAddress;
}

void Package::setScity(std::string city){//set sender city
	sCity = city;
}

std::string Package::getScity() const{//get sender city
	return sCity;
}

void Package::setSstate(std::string state){//set sender state
	sState = state;
}

std::string Package::getSstate() const{//get sender state
	return sState;
}

void Package::setSzip(std::string zip){//set sender zip
	sZip = zip;
}

std::string Package::getSzip() const{//get sender zip
	return sZip;
}

void Package::setRname(std::string name){//set receiver name
	rName = name;
}

std::string Package::getRname() const{//get receiver name
	return rName;
}

void Package::setRaddress(std::string address){//set receiver address
	rAddress = address;
}

std::string Package::getRaddress() const{//get receiver address
	return rAddress;
}

void Package::setRcity(std::string city){//set receiver city
	rCity = city;
}

std::string Package::getRcity() const{//get receiver city
	return rCity;
}

void Package::setRstate(std::string state){//set receiver state
	rState = state;
}

std::string Package::getRstate() const{//get receiver state
	return rState;
}

void Package::setRzip(std::string zip){//set receiver zip
	rZip = zip;
}

std::string Package::getRzip() const{//get receiver zip
	return rZip;
}

void Package::setWeight(double weight){//set weight
	if(weight<0){
		Weight = 0;
		std::cout << "The weight entered is negative! Weight will be set to zero!" << std::endl;
	}
	else{
		Weight = weight;
	}
}

double Package::getWeight() const{//get weight
	return Weight;
}

void Package::setCost(double cost){//set cost
	if(cost<0){
		Cost = 0;
		std::cout << "The cost per ounce entered is negative! It will be set to zero!" << std::endl;
	}
	else{
		Cost = cost;
	}
}

double Package::getCost() const{//get cost
	return Cost;
}

double Package::calculateCost(){//calculate the shipping cost
	return (Weight*Cost);
}

void Package::print() const{//display package info
	std::cout << "Sender:" << std::endl;
	std::cout << "       " << sName << std::endl;
	std::cout << "       " << sAddress << std::endl;
	std::cout << "       " << sCity << std::endl;
	std::cout << "       " << sState << std::endl;
	std::cout << "       " << sZip << std::endl << std::endl;

	std::cout << "Recipient:" << std::endl;
	std::cout << "         " << rName << std::endl;
	std::cout << "         " << rAddress << std::endl;
	std::cout << "         " << rCity << std::endl;
	std::cout << "         " << rState << std::endl;
	std::cout << "         " << rZip << std::endl << std::endl;

	std::cout << "Weight: " << Weight << " ounces" << std::endl;
	std::cout << "Cost per ounce: $" << Cost << std::endl;
}

Package::~Package() {
	// Auto-generated destructor stub
}

