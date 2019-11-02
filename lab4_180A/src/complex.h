#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class complex
{
    friend ostream& operator<< (ostream&, const complex&);
    friend istream& operator>> (istream&, complex&);
	friend complex operator-(const complex&,const complex&);
    friend complex operator+(const complex&,const complex&);

public:
    complex(int real=0, int imag=0);
    int get_real();
    void operator= (const complex&);
    int get_imag();
private:
    int real;
    int imag;
};
#endif
