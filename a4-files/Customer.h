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
	Customer();
	Customer(const Customer& customer);
	Customer(string lastName,char firstInitial,int balance);
	string getLastName();
	char getFirstInitial();
	int getBalance();
	void setBalance(int x);
	bool operator< (const Customer& c) const;
	bool operator<= (const Customer& c) const;
	bool operator> (const Customer& c) const;
	bool operator>= (const Customer& c) const;
	bool operator== (const Customer& c) const;
	bool operator!= (const Customer& c) const;
	~Customer();


private:
	friend ostream& operator<<(ostream & os,  Customer & c);
	string _lastName;
	char _firstInitial;
	int _balance;
};

#endif /* CUSTOMER_H_ */
