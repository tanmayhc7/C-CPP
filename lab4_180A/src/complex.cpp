#include "complex.h"
ostream& operator <<(ostream& os,const complex& complex)
{
    os << complex.real << "+("<<complex.imag<<")i"<<endl;
    return os;
}

istream& operator>> (istream& is, complex& complex)
{
    cout<<"\nReal:";
    is >>complex.real;
    cout<<"\nImag:";
	is >>complex.imag;
    return is;
}

void complex::operator= (const complex &two)
{
	real=two.real;
	imag=two.imag;
}


complex::complex(int r, int i)
{
	real = r;
    imag = i;
}

int complex::get_real()
{
	return real;
}

int complex::get_imag()
{
	return imag;
}


complex operator+(const complex& one,const complex& two)
{
	complex t;
	t.real = one.real + two.real;
    t.imag = one.imag + two.imag;
    return t;
}

complex operator-(const complex& operand1,const complex& operand2)
{
	complex t;
	    t.real = operand1.real - operand2.real;
	    t.imag = operand1.imag - operand2.imag;
	    return t;
}

