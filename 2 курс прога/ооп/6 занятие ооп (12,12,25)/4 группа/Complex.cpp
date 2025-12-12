#include "Complex.h"
using namespace std;

double Complex::length()
{
	return sqrt(*x * *x + *y * *y);
}

Complex::Complex()
{}

Complex::Complex(int X, int Y) : Pair(X, Y)
{}

Complex::Complex(const Complex& R) : Pair(R)
{}

Complex::~Complex()
{
//	cout << "D Complex\n";
}

//ostream& operator<<(ostream& out, const Complex& obj)
//{
//	out << *obj.getX() << " rub. " << *obj.getY() << " kop.\n";
//	return out;
//}

//Complex Complex::operator+(const Complex& r)
//{
//	// Complex res(*x + *r.x, *y + *r.y);
//	Pair tmp = Pair::operator+(r);
//	// Complex res (*tmp.getX(), *tmp.getY());
//	Complex* m = new Complex;
//	Pair* p = &tmp;
//	m = (Complex*)p;
//	m->normalize();
//	return *m;
//}

Pair* Complex::operator+(Pair* r)
{
	Complex* p = new Complex(*x + *(r->getX()), *y + *(r->getY()));
	return p;
}

Pair* Complex::operator-(const Pair& r)
{
	Complex* p = new Complex(*x - *r.getX(), *y - *r.getY());
	return p;
}

Complex* Complex::operator+=(Pair* r)
{
	*x += *(r->getX());
	*y += *(r->getY());
	return this;
}

Complex& Complex::operator-=(const Pair& r)
{
	*x -= *r.getX();
	*y -= *r.getY();
	return *this;
}

string Complex::toString()
{
	string str;
	str = to_string(*x) + " + " + to_string(*y) + " i\n";
	return str;
}