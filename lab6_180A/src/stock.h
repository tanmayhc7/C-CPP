#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class stock
{
public:

	string getName()
	{
		return name;
	}
	int getPrice()
	{
		return price;
	}
	int getNo()
	{
		return number_of_stocks;
	}
	void setParameters(string s,int p,int no)
	{
		name=s;price=p;number_of_stocks=no;
	}
private:
    string name;
    int price;
    int number_of_stocks;
};
#endif
