#include "Pair.h"
using namespace std;

Pair::Pair()
{
	Re = new int(0);
	Im = new int(0);
}

Pair::Pair(int RE, int IM)
{
	Re = new int(RE);
	Im = new int(IM);
}

Pair::Pair(const Pair& second)
{
	Re = new int(*second.Re);
	Im = new int(*second.Im);
}

int* Pair::getRe() const
{
	return Re;
}

int* Pair::getIm() const
{
	return Im;
}

Pair::~Pair()
{
	delete Re;
	delete Im;
	// cout << "Destructor (Pair)\n";
}
/*
string Pair::print()
{
	string str = "(" + to_string(*Re) + ", " + to_string(*Im) + ")\n";
	return str;
}

Pair Pair::operator+(const Pair& second)
{
	return Pair(*Re + *second.Re, *Im + *second.Im);
}

Pair* Pair::operator+=(const Pair& second)
{
	*Re += *second.Re;
	*Im += *second.Im;
	return this;
}

Pair Pair::operator-(const Pair& second)
{
	return Pair(*Re - *second.Re, *Im - *second.Im);
}

Pair& Pair::operator-=(const Pair& second)
{
	*Re -= *second.Re;
	*Im -= *second.Im;
	return *this;
}
*/
Pair& Pair::operator=(const Pair& second)
{
	*Re = *second.Re;
	*Im = *second.Im;
	return *this;
}
//
//Pair& Pair::operator++()
//{
//	(*Re)++;
//	(*Im)++;
//	return *this;
//}
//
//Pair Pair::operator++(int)
//{
//	Pair tmp(*Re, *Im);
//	(*Re)++;
//	(*Im)++;
//	return tmp;
//}
//

/*
ostream& operator<<(ostream& out, const Pair& obj)
{
	//out << "(" << *obj.getRe() << " , " << *obj.getIm() << ")\n";
	out << "(" << *obj.Re << " , " << *obj.Im << ")\n";
	return out;
}
*/
