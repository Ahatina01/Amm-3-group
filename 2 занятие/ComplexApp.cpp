#include "ClassComplex.h"
// #include <iostream>

int main()
{
	Complex a (4,-6);
	//a.init(3, 5);
	a.print();
	Complex b(3,5);
	//a.init(3, 5);
	b.print();
	Complex c = a.add(b);
	c.print();
	//    std::cout << "Hello, World!\n";
}


