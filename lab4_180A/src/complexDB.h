#ifndef COMPLEXDB_H
#define COMPLEXDB_H

#include "complex.h"
#define MAX_SIZE 5

class complexDB
{
	friend ostream& operator<< (ostream&, complexDB&);
	friend bool operator> (complex&,complex&);
public:
	void load(const complex&);
	void insert();
	void del();
	void store();
	int get_size();
	void bubbleSort();
	void insertionSort();
	void selectionSort();
private:
    vector<complex> v;

};
#endif
