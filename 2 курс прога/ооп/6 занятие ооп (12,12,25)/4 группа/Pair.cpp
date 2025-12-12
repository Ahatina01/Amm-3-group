#include "Pair.h"
using namespace std;

Pair::Pair()
{
	x = new int(0); 
	y = new int(0);
}

Pair::Pair(int X, int Y)
{
	x = new int(X); 
	y = new int(Y);
}

Pair::Pair(const Pair& r)
{
	x = new int(*r.x);
	y = new int(*r.y);
}

Pair::~Pair()
{
	delete x;
	delete y;
}

int* Pair::getX() const
{
	return x;
}

int* Pair::getY() const
{
	return y;
}

void Pair::setX(int X)
{
	*x = X;
}

void Pair::setY(int Y)
{
	*y = Y;
}

Pair& Pair::operator=(const Pair& r)
{
	if (this != &r)
	{
		*x = *r.x;
		*y = *r.y;
	}
	return *this;
}

/*
string Pair::toString()
{
	string str;
	str = "(" + to_string(*x) + ", " + to_string(*y) + ")\n";
	return str;
}

Pair Pair::operator+(const Pair& r)
{
	Pair res(*x + *r.x, *y + *r.y);
	return res;
}

Pair Pair::operator+(const Pair& r)
{
	Pair* res = new Pair(*x + *r.x, *y + *r.y);
	return *res;
}

Pair Pair::operator-(const Pair& r)
{
	return Pair(*x - *r.x, *y - *r.y);
}

Pair& Pair::operator+=(const Pair& r)
{
	if (this != &r)
	{
		*x += *r.x;
		*y += *r.y;
	}
	return *this;
}

Pair& Pair::operator-=(const Pair& r)
{
	if (this != &r)
	{
		*x -= *r.x;
		*y -= *r.y;
	}
	return *this;
}

ostream& operator<<(ostream& out, const Pair& obj)
{
	out << "(" << *obj.getX() << ", " << *obj.getY() << ")\n";
	return out;
}

istream& operator>>(istream& in, Pair& obj)
{
	cout << "Enter coordinates of Pair:\n";
	int x, y;
	in >> x >> y;
	obj.setX(x);
	obj.setY(y);
	return in;
}
 */