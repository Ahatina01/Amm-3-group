#include "ClassComplex.h"
using namespace std;

int Complex::getID()
{
	return ID;
}

Complex::Complex()
{
	Re = new double(0);
	Im = new double(0);
	// cout << "Default Constructor\n";
}

Complex::Complex(double RE, double IM) : Re(new double(RE))
{
	// Re = new double(RE);
	Im = new double(IM);
	// cout << "Constructor with parameters\n";
}

Complex::Complex(const Complex& second)
{
	Re = new double(*second.Re);
	Im = new double(*second.Im);
	// cout << "Copying Constructor\n";
}

double* Complex::getRe() const
{
	return Re;
}

double* Complex::getIm() const
{
	return Im;
}

Complex::~Complex()
{
	delete Re;
	delete Im;
	// cout << "Destructor\n";
}

string Complex::print()
{
	string str = to_string(*Re) + " + " + to_string(*Im) + "i\n";
	return str;
}

Complex Complex::operator+(const Complex& second)
{
	Complex res;
	*res.Re = *Re + *second.Re;
	*res.Im = *Im + *second.Im;
	// cout << "Operator +\n";
	return res;
}

Complex& Complex::operator+=(const Complex& second)
{
	*Re += *second.Re;
	*Im += *second.Im;
	// cout << "Operator +=\n";
	return *this;
}

Complex& Complex::operator=(const Complex& second)
{
	*Re = *second.Re;
	*Im = *second.Im;
	// cout << "Operator =\n";
	return *this;
}
Complex& Complex::operator++()
{
	(*Re)++;
	(*Im)++;
	return *this;
}

Complex Complex::operator++(int)
{
	Complex tmp(*Re, *Im);
	(*Re)++;
	(*Im)++;
	return tmp;
}

//
//ostream& Complex::operator<<(ostream& out)
//{
//	out << "(" << *Re << " , " << *Im << ")\n";
//	return out;
//}

ostream& operator<<(ostream& out, const Complex& obj)
{
	//out << "(" << *obj.getRe() << " , " << *obj.getIm() << ")\n";
	out << "(" << *obj.Re << " , " << *obj.Im << ")\n";
	return out;
}
