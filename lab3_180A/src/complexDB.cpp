#include "complexDB.h"
ostream& operator <<(ostream& os, complexDB& complexdb)
{
	for(int i=0;i<complexdb.v.size();i++)
    os << complexdb.v[i].get_real()<<"+i"<<complexdb.v[i].get_imag()<<endl;
    return os;
}

void complexDB::load(const complex& complex)
{
	v.push_back(complex);
}

void complexDB::insert()
{
	complex c;
	cin>>c;
	v.push_back(c);
}

void complexDB::del()
{
	int num;
	cout<<"Enter numbers of the elements to be deleted:";
	cin>>num;
	int* arr=new int[num];
	cout<<"Enter the position of the element to be deleted:";
	int pos;
	for(int i=0;i<num;i++)
	{
		cin>>pos;
		if(pos<v.size())
		{
			arr[i]=pos;
		}
		else
		{
			cout<<"Position not available..Enter no. less than "<<v.size();
			i--;
		}
	}
	for(int i=0;i<num;i++)
	{
		v.erase(v.begin()+(arr[i]-1));
	}
	delete[] arr;
}


void complexDB::store()
{
	cout<<"Storing....."<<endl;
	ofstream myfile;
	myfile.open("lab2complex.txt");
	if(!myfile.is_open())
	{
		cout<<"Unable to open file"<<endl;
	}
	else
	{
		for(int i=0;i<v.size();i++)
		myfile<<v[i].get_real()<<"+i("<<v[i].get_imag()<<")"<<endl;

		myfile.close();
	}
}

int complexDB::get_size()
{
	return v.size();
}
