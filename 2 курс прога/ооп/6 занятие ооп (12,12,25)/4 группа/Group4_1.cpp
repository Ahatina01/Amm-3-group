#include "Pair.h" 
#include "Money.h"
#include "Complex.h"
using namespace std;

template <class T1, class T2>
T1 sum(T1 a, T2 b)
{
	return a + (T1)b;
}

template <class T>
T minimum(T a, T b)
{
	return (a < b) ? a : b;
}

template <class X>
class Triad
{
	X a, b, c;
public:
	Triad(X A, X B, X C);
	X getA();
	X getB();
	X getC();
	void toString(ostream& out);
};

template <class X>
Triad <X>::Triad(X A, X B, X C) :a(A), b(B), c(C) {};

template <class X>
X Triad <X>::getA() { return a; };

template <class X>
X Triad <X>::getB() { return b; };

template <class X>
X Triad <X>::getC() { return c; };

template <class X>
void Triad <X>::toString(ostream& out)
{
	//string str;
	// str = "(" + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + ")\n";
	//return str;
	out << "(" <<  getA() << ", " << getB() << ", " << getC() << ")\n";
}

int main()
{
	Triad <int> obj1(1, 2, 3);
	obj1.toString(cout);
	Triad <double> obj2(1.3, 2.4, -3.8);
	obj2.toString(cout);

	Money* m1 = new Money(2, 80);
	cout << m1->toString();
	Money* m2 = new Money(3, 70);
	cout << m2->toString();
	Money* m3 = new Money(4, 90);
	cout << m3->toString();
	Triad <Money> obj3(*m1, *m2, *m3);
	cout << " --------------- \n";
	Money m = obj3.getA();
	cout << m << "\n";
	
	obj3.toString(cout);

	// cout << sum(3, 6) << "\n";
	// cout << sum(3.5, 6.4) << "\n";
	// cout << minimum(3.5, 6.1) << "\n";
	/*
	Pair* p1 = new Complex(3, -4);
	cout << p1->toString();
	Complex* m1 = dynamic_cast<Complex*>(p1);
	cout << m1->length() << "\n";
	Money* p2 = new Money(2, 80);
	cout << p2->toString();
	// Money* m2 = dynamic_cast<Money*>(p2);
	// m2->normalize();
	// cout << m2->toString();
	Money* p3 = new Money(3, 70);
	cout << p3->toString();
	
	Money* res = new Money;
	*res = minimum(*p2, *p3);
	cout << res->toString();
	// cout << res << "\n";
	
	//cout << minimum(*p2, *p3) << "\n";

	// Pair* p3 = new Complex;
	// p3 = *p1 + *p2;
	// p3 = p1->operator+(p2);
	// cout << p3->toString();
	
	// p1->operator+=(p2);
	// cout << p1->toString();
	//*m1 -= *m2;
	//cout << *m1;
	//*m1 += *m2;
	//cout << m1->toString();
	cout << " --------------- \n";
	
	// delete p1;
	
	// delete p2;
	// delete p3;
	int i = 3, j = 4;
	cout << i + j << "\n";
	double* p = new double(3);
	double* q = new double(4);
	cout << p << "    " << p++ << "\n";
	*/
}

