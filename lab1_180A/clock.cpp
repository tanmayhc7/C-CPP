#include "clock.h"
istream& operator>> (istream& is, clockType& c1)
{
    char ch;
    is >> ch >> c1.hr >> ch >> c1.min >> ch >> c1.sec;
    return is;
}

ostream& operator<< (ostream& os, const clockType& c1)
{
    os << c1.hr << ":"<< c1.min << ":" << c1.sec << endl;
    return os;
}

clockType operator+(clockType& c1, clockType& c2)
{
    int x=0;
	clockType c3;
    c3.sec = c1.sec + c2.sec;
    if(c3.sec>=60)
    	{
    		c3.sec-=60; x=1;
    	}
    c3.min = c1.min + c2.min;
    if(x==1) c3.min+=1;
    if(c3.min>=60)
    {
    	c3.min-=60;x=2;
    }
    c3.hr = c1.hr + c2.hr;
    if(x==2) c3.hr+=1;
    if(c3.hr>=24) c3.hr-=24;
    return c3;
}

clockType operator-(clockType& c1, clockType& c2)
{
    clockType c3;
    c3.sec = abs(c1.sec - c2.sec);
    c3.min = abs(c1.min - c2.min);
    c3.hr  = abs(c1.hr - c2.hr);

    return c3;
}


clockType::clockType(int hours, int minutes, int seconds)
{
    hr =  hours;
    min = minutes;
    sec = seconds;
}
