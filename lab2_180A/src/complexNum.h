#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class complexNum
{
    friend ostream& operator<< (ostream&, const complexNum&);
    friend istream& operator>> (istream&, complexNum&);
	friend complexNum operator-(const complexNum&,const complexNum&);
    friend complexNum operator+(const complexNum&,const complexNum&);

public:
    complexNum(int real=0, int imag=0);
    void get_real_part()
    {
    	cin>>real;
    }
    void get_imag_part()
    {
    	cin>>imag;
    }
    int get_real()
    {
    	return real;
    }
    int get_imag()
	{
		return imag;
	}
    void setComplex(int r,int i)
    {
    	real=r;
    	imag=i;
    }
private:
    int real;
    int imag;
};
