#pragma once
#include "Pair.h"
using namespace std;

class Money : public Pair
{
public:
	void normalize();
	Money();
	Money(int X, int Y);
	Money(const Money& R);
	~Money();
	
	Pair* operator+(Pair* r);
	Pair* operator-(const Pair& r);
	Money* operator+=(Pair* r);
	Money& operator-=(const Pair& r);
	string toString();

	int toKop() const
	{
		return *x * 100 + *y;
	}

	bool operator< (const Money& r)
	{
		if (toKop() < r.toKop()) return true;
		else return false;
	}

	// string toString(const Money& r);
};

ostream& operator<<(ostream& out, const Money& obj);