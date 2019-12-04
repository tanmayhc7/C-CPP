//============================================================================
// Name        : lab10_180A.cpp
// Author      : Tanmay
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "circular_Q.h"

int main()
{
	circ_queue *q=new circ_queue();
	allocate_size(q,10);
	enQueue(q,14);
	enQueue(q,22);
	enQueue(q,13);
	enQueue(q,-6);
	displayQueue(q);
	cout<<"\nDeleted value = "<< deQueue(q);
	displayQueue(q);
	enQueue(q,9);
	cout<<"\nDeleted value = "<< deQueue(q);
	enQueue(q,20);
	enQueue(q,5);
	displayQueue(q);
	enQueue(q,20);
	cout<<"\nQueue size = "<< check_size(q);
	check_empty(q);
	return 0;
}
