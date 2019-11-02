//============================================================================
// Name        : lab2_180A.cpp
// Author      : Tanmay
// Version     :
// Copyright   : Your copyright notice
//============================================================================
#include "complexNum.h"
#define filename "complex.txt"
bool user=1;
int file_size=0;
void get_filesize()
{
	ifstream fin;
	fin.open(filename);
	string s;
	while (getline(fin, s)){
		file_size++;
	}
	fin.close();
}
void get_filedata(int *real,int *imag)
{
	ifstream fin;
	fin.open(filename);

	int r,i;
	int i=0;
	char plusorminus,ichar;
	complexNum c;
	string s;
	while (!fin.eof()){
		getline(fin, s);
		r=0; i=0; plusorminus='\0'; ichar='\0';
		stringstream(s)>>r>>plusorminus>>i>>ichar;

		switch (plusorminus){
		case	'-': i=-i; real[i]=r; imag[i++]=i; break;
		case	'i': i=r; real=0; r[i]=r; imag[i++]=i; break;
		case	'\0': i=0; real[i]=r; imag[i++]=i; break;
		}
		c.setComplex(r, i);
		cout << c << endl;
	}
	fin.close();
}

int main() {
	if(user)
	{
		complexNum arr[3];
		for(int i=0;i<3;i++)
			{
				cin>>arr[i];
			}
			for(int i=0;i<3;i++)
			{
				cout<<arr[i];
			}
		complexNum obj;
			for(int i=0;i<3;i++)
			{
				obj=obj+arr[i];
			}
		cout<<obj;
		ofstream myfile;
		myfile.open("ComplexObj.txt");
		if(!myfile.is_open())
		{
			cout<<"Unable to open file"<<endl;
		}
		else
		{
			myfile<<obj.get_real()<<"+i("<<obj.get_imag()<<")"<<endl;
			myfile.close();
		}
	}
	else
	{
		get_filesize();
		int* real=new int[file_size];
		int* imag=new int[file_size];
		get_filedata(real,imag);
		ofstream myfile;
		myfile.open("ComplexObj.txt");
		if(!myfile.is_open())
		{
			cout<<"Unable to open file"<<endl;
		}
		else
		{
			int sum_real=0;int sum_imag=0;
			for(int i=0;i<file_size;i++)
				sum_real+=real[i];
			for(int i=0;i<file_size;i++)
				sum_imag+=imag[i];
			myfile<<sum_real<<"+i("<<sum_imag<<")"<<endl;
			myfile.close();
		}

	}

    return 0;
}
