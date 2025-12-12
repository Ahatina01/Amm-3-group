#include "Pair.h"
#include "Money.h"
using namespace std;

template <class T1, class T2>
T1 minimum(T1 a, T2 b)
{
	return (a < b) ? a : (T1)b;
}

template <class T>
class Triad
{
	T a, b, c;
public:
	Triad(T A, T B, T C);
	T getA() const;
	T getB() const;
	T getC() const;
	string print();
};

template <class T>
Triad<T>::Triad(T A, T B, T C):a(A), b(B), c(C){}

template <class T>
T Triad<T>::getA() const { return a; }

template <class T>
T Triad<T>::getB() const { return b; }

template <class T>
T Triad<T>::getC() const { return c; }

template <class T>
string Triad<T>::print() 
{
	string str = "( " + to_string(a) + ", " + to_string(b) + " , " + to_string(c) + " )\n";
	return str;
}

int main()
{
	/*
	cout << minimum(3, -4) << "\n";
	cout << minimum(4, 3.5) << "\n";
	
	Money* ma = new Money(3, 170);
	cout << ma->print();
	Money* mb = new Money(2, 80);
	cout << mb->print();
	cout << minimum(*ma, *mb) << "\n";
	*/

	Triad<int> obj(3, 4, 5);
	cout << obj.print() << "\n";

	Money* ma = new Money(1, 70);
	cout << ma->print();
	Money* mb = new Money(2, 80);
	cout << mb->print();
	Money* mc = new Money(3, 90);
	cout << mc->print();
	cout << "-------------\n";
	Triad<Money> obj1(*ma, *mb, *mc);
	// cout << obj1.print() << "\n";
	Money new_obj = obj1.getA();
	cout << new_obj << "\n";
	/*
	Pair* mc = new Money;
	mc = ma->operator+(mb);
	cout << mc->print();
	cout << "-------------\n";
	ma->operator+=(mb);
	cout << ma->print();

	Money* mmc = dynamic_cast<Money*>(mc);
	*mmc = mmc->mult(2);
	cout << mmc->print();
	*/

	/* --- */
	// delete pa;
	// delete ma;
	// delete mb;
	// delete mc;
}


