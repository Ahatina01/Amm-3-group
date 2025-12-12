#pragma once
#include <string>
#include <math.h>
#include <iostream>
using namespace std;

class Pair
{
protected:
	int *x, *y;
	
public:
	Pair();
	Pair(int X, int Y);
	Pair(const Pair& r);
	virtual ~Pair();
	Pair& operator=(const Pair& r);
	int* getX() const;
	int* getY() const;
	void setX(int X);
	void setY(int Y);
	virtual string toString() = 0;
	virtual Pair* operator+(Pair* r) = 0;
	virtual Pair* operator-(const Pair& r) = 0;
	virtual Pair* operator+=(Pair* r) = 0;
	virtual Pair& operator-=(const Pair& r) = 0;
	// Pair& operator++();
	// Pair operator++(int);
};

// ostream& operator<<(ostream& out, const Pair& obj);
// istream& operator>>(istream& in, Pair& obj);