#include <iostream>
#include <math.h>
using namespace std;

class clockType {
 	friend ostream& operator<< (ostream&, const clockType&);
    friend istream& operator>> (istream&, clockType&);
    friend clockType operator+(clockType&,clockType&);
    friend clockType operator-(clockType&,clockType&);
public:
    clockType(int hours=0,int minutes=0,int seconds=0);

private:
    int hr;
    int min;
    int sec;

};
