#include "Money.h"
using namespace std;

void Money::normalize()
{
	if (*y > 99)
	{
		*x += *y / 100;
		*y %= 100;
	};
	if (*y < 0)
	{
		*x -= 1;
		*y += 100;
	}
}

Money::Money()
{
}

Money::Money(int X, int Y): Pair(X, Y)
{
	// normalize();
}

Money::Money(const Money& R): Pair(R)
{
}

Money::~Money()
{
//	cout << "D Money\n";
}

ostream& operator<<(ostream& out, const Money& obj)
{
	out << *obj.getX() << " rub. " << *obj.getY() << " kop.";
	return out;
}

//Money Money::operator+(const Money& r)
//{
//	// Money res(*x + *r.x, *y + *r.y);
//	Pair tmp = Pair::operator+(r);
//	// Money res (*tmp.getX(), *tmp.getY());
//	Money* m = new Money;
//	Pair* p = &tmp;
//	m = (Money*)p;
//	m->normalize();
//	return *m;
//}

Pair* Money::operator+(Pair* r)
{
	Money* p = new Money(*x + *(r->getX()), *y + *(r->getY()));
	p->normalize();
	return p;
}

Pair* Money::operator-(const Pair& r)
{
	Money* p = new Money(*x - *r.getX(), *y - *r.getY());
	p->normalize();
	return p;
}

Money* Money::operator+=(Pair* r)
{
	*x += *(r->getX());
	*y += *(r->getY());
	normalize();
	return this;
}

Money& Money::operator-=(const Pair& r)
{
	*x -= *r.getX();
	*y -= *r.getY();
	normalize();
	return *this;
}

string Money::toString()
{
	// cout << "ToString(Money) " << *x << "  " << *y << "\n";

	string str;
	str = to_string(*x) + " rub. " + to_string(*y) + " kop.";
	return str;
}

//string Money::toString(const Money& r)
//{
//	string str;
//	str = to_string(*(r.x)) + " rub. " + to_string(*(r.y)) + " kop.\n";
//	return str;
//}
