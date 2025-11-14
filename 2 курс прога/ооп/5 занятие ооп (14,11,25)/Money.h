#pragma once
#include "Pair.h"
using namespace std;

class Money : public Pair
{
	void normalize();
	int rm;
public:
	Money();
	Money(int RE, int IM, int RM);
	Money(const Money& second);
	~Money();
	Pair operator+(const Pair& second);
	Pair operator-(const Pair& second);
	Money& operator+=(const Money& second);
	Money& operator-=(const Money& second);
	Money mult(int n);
	string print();
	// bool operator<(const Money& second);
	// bool operator>=(const Money& second);
	// bool operator>(const Money& second);
	// bool operator<=(const Money& second);
	friend ostream& operator<< (ostream& out, const Money& obj);
};