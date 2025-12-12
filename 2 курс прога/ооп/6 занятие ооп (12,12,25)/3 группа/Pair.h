#pragma once
#include <string>
#include <iostream>

using namespace std;

class Pair
{
protected:
	int *Re, *Im;
	
public:
	Pair();
	Pair(int RE, int IM);
	Pair(const Pair& second);
	int* getRe() const;
	int* getIm() const;
	virtual ~Pair();
	Pair& operator=(const Pair& second);
	virtual string print() = 0;
	virtual Pair* operator+(Pair* second) = 0;
	virtual Pair* operator+=(Pair* second) = 0;
	virtual Pair* operator-(Pair* second) = 0;
	virtual Pair* operator-=(Pair* second) = 0;
	// bool operator==(const Pair& second);
	// bool operator!=(const Pair& second);
	//Pair& operator++();//prefix
	//Pair operator++(int);//postfix
	// friend ostream& operator<< (ostream& out, const Pair& obj);
};

	//ostream& operator<< (ostream& out, const Pair& obj);