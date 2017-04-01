/*
 * Customer.h
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include <iostream>
using namespace std;

class Customer {
public:
	Customer(string,char,int);


private:
	friend ostream& operator<<(ostream & os,  Customer & c);

};

#endif /* CUSTOMER_H_ */
