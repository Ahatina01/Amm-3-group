#include "ClassComplex.h"
#include <iostream>

Complex::Complex()
{
	Re = 0;
	Im = 0;
}

Complex::Complex(double RE, double IM)
{
	Re = RE;
	Im = IM;
}

void Complex::init(double RE, double IM)
{
	Re = RE;
	Im = IM;
};

void Complex::print()
{
	std::cout << Re << " + " << Im << "i\n";
}

Complex Complex::add(Complex second)
{
	Complex res;
	res.Re = Re + second.Re;
	res.Im = Im + second.Im;
	return res;
}
