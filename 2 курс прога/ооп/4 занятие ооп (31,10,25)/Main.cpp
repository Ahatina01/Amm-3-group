#include "Pair.h"
#include "Money.h"
using namespace std;

int main()
{

	// Pair* pa = new Pair(4, 6);
	// cout << *pa;
	Money* ma = new Money(3, 70);
	cout << *ma;
	Money* mb = new Money(2, 80);
	cout << *mb;
	Pair* mc = new Money;
	Money* mcc = static_cast<Money*>(mc);
	cout << *mc;
	mc = mcc->mult(2);
	// ma->operator+=(*mb);
	cout << *mcc;
	/* --- */
	// delete pa;
	delete ma;
	delete mb;
	delete mc;
}


