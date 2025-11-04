#pragma once
#include "Pair.h"
using namespace std;

class Money : public Pair
{
	void normalize();
public:
	Money();
	Money(int RE, int IM);
	Money(const Money& second);
	~Money();
	Money* operator+(const Money& second);
	Money* operator-(const Money& second);
	Money* operator+=(const Money& second);
	Money* operator-=(const Money& second);
	Money* mult(int n);
	// bool operator<(const Money& second);
	// bool operator>=(const Money& second);
	// bool operator>(const Money& second);
	// bool operator<=(const Money& second);
	friend ostream& operator<< (ostream& out, const Money& obj);
};