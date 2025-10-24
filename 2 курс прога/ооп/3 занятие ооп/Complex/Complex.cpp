#include "ClassComplex.h"
using namespace std;

int Complex::ID = 0;

int main()
{

	cout << Complex::getID() << "\n";
	Complex* pa = new Complex(4, 6);
	cout << *pa;
	Complex* pb = new Complex(3,5);
	cout << *pb;
	Complex* pc = new Complex((*pa)++ + (*pb)++);
	cout << *pc;
	cout << "------------------\n";
	cout << *pa;
	cout << *pb;
	Complex* pd = new Complex(++(*pa) + ++(*pb));
	cout << *pd;
	cout << "------------------\n";
	cout << *pa;
	cout << *pb;
	// Complex* pc = new Complex(*pa + *pb);
	// Complex* pc = new Complex(*pa += *pb);
	
	delete pa;
	delete pb;
	delete pc;
	delete pd;
	/* --- */
}


