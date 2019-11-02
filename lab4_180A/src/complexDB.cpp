#include "complexDB.h"
ostream& operator <<(ostream& os, complexDB& complexdb)
{
	for(int i=0;i<complexdb.v.size();i++)
    os << complexdb.v[i].get_real()<<"+i"<<complexdb.v[i].get_imag()<<endl;
    return os;
}

bool operator > (complex& one,complex& two)
{
	int real_1=one.get_real(); int imag_1=one.get_imag();
	int real_2=two.get_real(); int imag_2=two.get_imag();
	int mag_1=real_1*real_1+imag_1*imag_1;
	int mag_2=real_2*real_2+imag_2*imag_2;
	return (mag_1>mag_2);
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

void complexDB::bubbleSort()
{
	for (int i = 0; i < v.size()-1; i++)
	for (int j = 0; j < v.size()-i-1; j++)
		if (v[j] > v[j+1])
		{
			complex temp;
			temp=v[j];
			v[j]=v[j+1];
			v[j+1]=temp;
		}
}

void complexDB::insertionSort()
{
	int i,j;
	complex key;
	for (i = 1; i < v.size(); i++)
	{
		key = v[i];
		j = i - 1;
		while (j >= 0 && v[j] > key)
		{
			v[j + 1] = v[j];
			j = j - 1;
		}
		v[j + 1] = key;
	}
}

void complexDB::selectionSort()
{
	int i, j, min_idx;
	for (i = 0; i < v.size()-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < v.size(); j++)
		if (v[min_idx] > v[j])
			min_idx = j;

		// Swap the found minimum element with the first element
		complex temp;
		temp=v[min_idx];
		v[min_idx]=v[i];
		v[i]=temp;
	}
}
