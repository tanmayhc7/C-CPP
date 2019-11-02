//============================================================================
// Name        : lab3_180A.cpp
// Author      : Tanmay
// Version     :
// Copyright   : Your copyright notice
//============================================================================
#include <time.h>
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
	complex c1(1,2);
	complex c2(2,3);
	complex c3(3,4);
	complexDB db_obj;
	db_obj.load(c1);
	db_obj.load(c2);
	db_obj.load(c3);
	//cout<<db_obj;
	int choice;
	bool flag=1;
	//cout<<"\n"<<db_obj.get_size()<<endl;

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
	return 0;
}
