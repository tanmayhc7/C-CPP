/*
 * circular_Q.h
 *
 *  Created on: Dec 4, 2019
 *      Author: Tanmay
 */

#ifndef CIRCULAR_Q_H_
#define CIRCULAR_Q_H_
#include <iostream>
#include <math.h>
using namespace std;

typedef struct Queue
{
	int rear, front;
	int size;
	int *arr;
}circ_queue;
void allocate_size(circ_queue *q,int size);
void enQueue(circ_queue *q,int value);
int deQueue(circ_queue *q);
void displayQueue(circ_queue *q);
int check_size(circ_queue *q);
void check_empty(circ_queue *q);
#endif /* CIRCULAR_Q_H_ */
