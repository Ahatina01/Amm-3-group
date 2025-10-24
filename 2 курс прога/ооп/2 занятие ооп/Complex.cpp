#include "ClassComplex.h"
using namespace std;

int main()
{
	Complex* pa = new Complex(4,6);
	//cout << pa->print();
	//pa->operator<<(cout);
	cout << *pa;
	Complex* pb = new Complex(3,5);
	cout << *pb;
	// Complex* pc = new Complex(*pa + *pb);
	Complex* pc = new Complex(*pa += *pb);
	//*pc = *pa + *pb;
	cout << *pc;

	delete pa;
	delete pb;
	delete pc;
	
	/* --- */
}


