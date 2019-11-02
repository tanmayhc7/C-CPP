#include "complexNum.h"
ostream& operator <<(ostream& os,const complexNum& complex)
{
    os << complex.real << "+("<<complex.imag<<")i"<<endl;
    return os;
}

istream& operator>> (istream& is, complexNum& complex)
{
    cout<<"\nReal:";
    is >>complex.real;
    cout<<"\nImag:";
	is >>complex.imag;
    return is;
}

complexNum::complexNum(int r, int i)
{
	real = r;
    imag = i;
}

complexNum operator+(const complexNum& one,const complexNum& two)
{
	complexNum t;
	t.real = one.real + two.real;
    t.imag = one.imag + two.imag;
    return t;
}

complexNum operator-(const complexNum& operand1,const complexNum& operand2)
{
	complexNum t;
	    t.real = operand1.real - operand2.real;
	    t.imag = operand1.imag - operand2.imag;
	    return t;
}

