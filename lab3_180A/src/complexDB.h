#ifndef COMPLEXDB_H
#define COMPLEXDB_H

#include "complex.h"
#define MAX_SIZE 5

class complexDB
{
	friend ostream& operator<< (ostream&, complexDB&);
public:
	void load(const complex&);
	void insert();
	void del();
	void store();
	int get_size();
private:
    vector<complex> v;

};
#endif
