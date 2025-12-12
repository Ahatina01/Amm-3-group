#pragma once
#include "Pair.h"
using namespace std;

class Complex : public Pair
{
public:
	double length();
	Complex();
	Complex(int X, int Y);
	Complex(const Complex& R);
	~Complex();

	Pair* operator+(Pair* r);
	Pair* operator-(const Pair& r);
	Complex* operator+=(Pair* r);
	Complex& operator-=(const Pair& r);
	string toString();
};

// ostream& operator<<(ostream& out, const Complex& obj);