#include "Pair.h"
#include "Money.h"
using namespace std;

int main()
{
	Pair* ma = new Money(3, 170, 0);
	cout << ma->print();
	
	/*
	Pair* mb = new Money(2, 80, 0);
	cout << mb->print();
	Pair* mc = new Money;
	*mc = *ma + *mb;
	cout << mc->print();
	Money* mmc = dynamic_cast<Money*>(mc);
	*mmc = mmc->mult(2);
	cout << mmc->print();
	*/

	/* --- */
	// delete pa;
	delete ma;
	// delete mb;
	// delete mc;
}


