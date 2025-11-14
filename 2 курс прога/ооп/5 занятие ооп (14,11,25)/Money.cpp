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

Money::Money(int RE, int IM, int RM) : Pair(RE, IM)
{
	normalize();
}

Money::Money(const Money& second) : Pair(second)
{
}

Money::~Money()
{
	cout << "Destructor (Money)\n";
}

Pair Money::operator+(const Pair& second)
{
	Pair tmp = Pair::operator+(second);
	Money res(*tmp.getRe(), *tmp.getIm(), 0);
	res.normalize();
	return res;
}

Pair Money::operator-(const Pair& second)
{
	Pair tmp = Pair::operator+(second);
	Money res(*tmp.getRe(), *tmp.getIm(), 0);
	res.normalize();
	return res;
}

Money& Money::operator+=(const Money& second)
{
	Pair::operator+=(second);
	normalize();
	return *this;
}

Money& Money::operator-=(const Money& second)
{
	Pair::operator-=(second);
	normalize();
	return *this;
}
Money Money::mult(int n)
{
	Money res(*Re * n, *Im * n, 0);
	return res;
}
ostream& operator<<(ostream& out, const Money& obj)
{
	//out << "(" << *obj.getRe() << " , " << *obj.getIm() << ")\n";
	out << *obj.Re << " rub. " << *obj.Im << " kop.\n";
	return out;
}

string Money::print()
{
	string str = to_string(*Re) + " rub. " + to_string(*Im) + " kop.\n";
	return str;
}
