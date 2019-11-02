//============================================================================
// Name        : lab4_180A.cpp
// Author      : Tanmay
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "complexDB.h"
using namespace std;
void menu()
{
	cout<<"-----------MENU-----------"<<endl;
	cout<<"| 1 | Insert complex no. |"<<endl;
	cout<<"| 2 | Delete complex no. |"<<endl;
	cout<<"| 3 | Display complex no.|"<<endl;
	cout<<"| 4 | Store complex no.  |"<<endl;
	cout<<"--------------------------"<<endl;
}
int main() {
	complex c1(1000,2000);
	complex c2(20,30);
	complex c3(300,400);
	complexDB db_obj;
	db_obj.load(c1);
	db_obj.load(c2);
	db_obj.load(c3);
	int choice;
	bool flag=1;

	while(flag)
	{
		menu();
		cout<<"Enter your choice:"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:	db_obj.insert();
				break;
		case 2: db_obj.del();
				break;
		case 3: cout<<db_obj;
				for(int i=0;i<INT_MAX/4;i++);
				break;
		case 4: db_obj.store();
				break;
		default: flag=0;break;
		}
	}
	char c;
	cout<<"Enter choice of sort:"<<endl;//b,i,s
	cin>>c;
	switch(c)
	{
		case 'b': 	cout<<"Before Sorting..."<<endl;
					cout<<db_obj;
					db_obj.bubbleSort();
					cout<<"After Sorting...."<<endl;
					cout<<db_obj;
					break;
		case 'i': 	cout<<"Before Sorting..."<<endl;
					cout<<db_obj;
					db_obj.insertionSort();
					cout<<"After Sorting...."<<endl;
					cout<<db_obj;
					break;
		case 's':
					cout<<"Before Sorting..."<<endl;
					cout<<db_obj;
					db_obj.selectionSort();
					cout<<"After Sorting...."<<endl;
					cout<<db_obj;
					break;
		default: 	cout<<"wrong choice"<<endl;
					break;
	}
	return 0;
}
