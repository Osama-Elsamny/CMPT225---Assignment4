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
Customer::Customer(const Customer& other){
	_lastName = other._lastName;
	_firstInitial = other._firstInitial;
	_balance = other._balance;
}
Customer::Customer(string lastName,char firstInitial,int balance){
	_lastName = lastName;
	_firstInitial = firstInitial;
	_balance = balance;
}
string Customer::getLastName(){
	return _lastName;
}
char Customer::getFirstInitial(){
	return _firstInitial;
}
int Customer::getBalance(){
	return _balance;
}
void Customer::setBalance(int x){
	_balance = x;
}
bool Customer::operator< (const Customer& c) const{
	if (this->_lastName > c._lastName)
	{
		return false;
	}
	if ((this->_lastName == c._lastName) && (this->_firstInitial >= c._firstInitial))
	{
		return false;
	}
	return true;
}
bool Customer::operator<= (const Customer& c) const{
	if (this->_lastName > c._lastName)
	{
		return false;
	}
	if (this->_firstInitial > c._firstInitial)
	{
		return false;
	}
	return true;
}
bool Customer::operator> (const Customer& c) const{
	if (this->_lastName < c._lastName)
	{
		return false;
	}
	if ((this->_lastName == c._lastName) && (this->_firstInitial <= c._firstInitial))
	{
		return false;
	}
	return true;
}
bool Customer::operator>= (const Customer& c) const{
	if (this->_lastName < c._lastName)
	{
		return false;
	}
	if (this->_firstInitial < c._firstInitial)
	{
		return false;
	}
	return true;
}
bool Customer::operator== (const Customer& c) const{
	if (this->_lastName != c._lastName)
	{
		return false;
	}
	if (this->_firstInitial != c._firstInitial)
	{
		return false;
	}
	return true;
}
bool Customer::operator!= (const Customer& c) const{
	if (this->_lastName != c._lastName)
	{
		return true;
	}
	if (this->_firstInitial != c._firstInitial)
	{
		return true;
	}
	return false;
}
Customer::~Customer(){}
ostream& operator<<(ostream & os,  Customer & c) {
	os << c._lastName << ", " << c._firstInitial << ". (" << c._balance << ")";
}
