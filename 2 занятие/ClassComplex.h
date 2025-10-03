#pragma once
#pragma once
class Complex
{
//private:
	double Re, Im;
public:
	Complex();
	Complex(double RE, double IM);
	void init(double RE, double IM);
	void print();
	Complex add(Complex second);
};