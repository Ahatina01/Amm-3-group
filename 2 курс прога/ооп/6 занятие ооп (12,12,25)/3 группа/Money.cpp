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

Money::~Money()
{
	// cout << "Destructor (Money)\n";
}

Pair* Money::operator+(Pair* second)
{
	// Pair tmp = Pair::operator+(second);
	Money* res = new Money(*Re + *(second->getRe()), *Im + *(second->getIm()));
	// Money res(*tmp.getRe(), *tmp.getIm());
	res->normalize();
	return res;
}

Pair* Money::operator-(Pair* second)
{
	Money* res = new Money(*Re - *(second->getRe()), *Im - *(second->getIm()));
	res->normalize();
	return res;

}

Pair* Money::operator+=(Pair* second)
{
	*Re += *(second->getRe());
	*Im += *(second->getIm());
	normalize();
	return this;
}

Pair* Money::operator-=(Pair* second)
{
	*Re -= *(second->getRe());
	*Im -= *(second->getIm());
	normalize();
	return this;
}
Money Money::mult(int n)
{
	Money res(*Re * n, *Im * n);
	return res;
}

ostream& Money::operator<<(ostream& out, const Money& obj)
{
	//out << "(" << *obj.getRe() << " , " << *obj.getIm() << ")\n";
	out << *obj.Re << " rub. " << *obj.Im << " kop.\n";
	return out;
}

//ostream& Money::operator<<(ostream& out)
//{
//	//out << "(" << *obj.getRe() << " , " << *obj.getIm() << ")\n";
//	out << *Re << " rub. " << *Im << " kop.\n";
//	return out;
//}

string Money::print()
{
	string str = to_string(*Re) + " rub. " + to_string(*Im) + " kop.\n";
	return str;
}
