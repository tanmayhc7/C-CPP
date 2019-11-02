/*
 * main.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: Tanmay
 */
#include "clock.h"

int main() {
    clockType c1(23,59,59);
    clockType c2(0,0,1);
    cout<<c1;
	cout<<c1+c2;
	cout<<c1-c2;
	c2 = c1+c1;
	cout<<c2;
	cout<<c2+c1;
    return 0;
}
