#pragma once
#include <string>
#include <iostream>

using namespace std;

class Complex
{
//private:
	double *Re, *Im;
	static int ID;
public:
	static int getID();
	Complex();
	Complex(double RE, double IM);
	Complex(const Complex& second);
	double* getRe() const;
	double* getIm() const;
	~Complex();
	string print();
	Complex operator+(const Complex& second);
	Complex& operator+=(const Complex& second);
	Complex& operator=(const Complex& second);
	Complex& operator++();//prefix
	Complex operator++(int);//postfix
	//ostream& operator<<(ostream& out);
	friend ostream& operator<< (ostream& out, const Complex& obj);
};

	//ostream& operator<< (ostream& out, const Complex& obj);