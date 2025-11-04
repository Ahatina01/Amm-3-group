#include "Money.h"
using namespace std;

void Money::normalize()
{
	if (*Im >= 100)
	{
		*Re += *Im / 100;
		*Im %= 100;
	}
	if (*Im < 0)
	{
		*Re -= 1;
		*Im += 100;
	}
}

Money::Money(){}

Money::Money(int RE, int IM) : Pair(RE, IM)
{
	normalize();
}

Money::Money(const Money& second) : Pair(second)
{
}

Money::~Money(){}

Money* Money::operator+(const Money& second)
{
	// Pair* tmp = new Pair(Pair::operator+(second));
	Money* res = static_cast<Money*>(Pair::operator+(second));
	res->normalize();
	// Money res(*tmp.getRe(), *tmp.getIm());
	// res.normalize();
	return res;
}

Money* Money::operator-(const Money& second)
{
	// Pair* tmp = new Pair(Pair::operator+(second));
	Money* res = static_cast<Money*>(Pair::operator-(second));
	res->normalize();
	// Money res(*tmp.getRe(), *tmp.getIm());
	// res.normalize();
	return res;
}

Money* Money::operator+=(const Money& second)
{
	Pair::operator+=(second);
	normalize();
	return this;
}

Money* Money::operator-=(const Money& second)
{
	Pair::operator-=(second);
	normalize();
	return this;
}
Money* Money::mult(int n)
{
	Money* res = new Money(*Re * n, *Im * n);
	return res;
}
ostream& operator<<(ostream& out, const Money& obj)
{
	//out << "(" << *obj.getRe() << " , " << *obj.getIm() << ")\n";
	out << *obj.Re << " rub. " << *obj.Im << " kop.\n";
	return out;
}
