#pragma once
#include "Pair.h"
using namespace std;

class Money : public Pair
{
	int toKop() const
	{
		return *Re * 100 + *Im;
	}
	void normalize();
public:
	Money();
	Money(int RE, int IM);
	Money(const Money& second);
	~Money();
	Pair* operator+(Pair* second);
	Pair* operator-(Pair* second);
	Pair* operator+=(Pair* second);
	Pair* operator-=(Pair* second);
	Money mult(int n);
	string print();
	bool operator<(const Money& second)
	{
		return (toKop() < second.toKop());
	};
	// bool operator>=(const Money& second);
	// bool operator>(const Money& second);
	// bool operator<=(const Money& second);
	ostream& operator<< (ostream& out, const Money& obj);
};