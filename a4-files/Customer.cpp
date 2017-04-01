/*
 * Customer.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */

#include "Customer.h"

Customer::Customer(){
	_lastName = "null";
	_firstInitial = '\0';
	_balance = 0;
}
Customer::Customer(string lastName,char firstInitial,int balance){
	_lastName = lastName;
	_firstInitial = firstInitial;
	_balance = balance;
}


Customer::~Customer(){}
ostream& operator<<(ostream & os,  Customer & c) {
	os << c._lastName << ", " << c._firstInitial << ". (" << c._balance << ")";
}
