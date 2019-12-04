/*
 * circular_Q.cpp
 *
 *  Created on: Dec 4, 2019
 *      Author: Tanmay
 */
#include "circular_Q.h"
void allocate_size(circ_queue *q,int size)
{
	q->front = q->rear = -1;
	q->size = size;
	q->arr = new int[size];
}

void enQueue(circ_queue *q,int value)
{
	if ((q->front == 0 && q->rear == q->size-1) || (q->rear == (q->front-1)%(q->size-1)))
	{
		printf("\nQueue is Full");
		return;
	}

	else if (q->front == -1)
	{
		q->front = q->rear = 0;
		q->arr[q->rear] = value;
	}

	else if (q->rear == q->size-1 && q->front != 0)
	{
		q->rear = 0;
		q->arr[q->rear] = value;
	}

	else
	{
		q->rear++;
		q->arr[q->rear] = value;
	}
}

int deQueue(circ_queue *q)
{
	if (q->front == -1)
	{
		printf("\nQueue is Empty");
		return INT_MIN;
	}

	int data = q->arr[q->front];
	q->arr[q->front] = -1;
	if (q->front == q->rear)
	{
		q->front = -1;
		q->rear = -1;
	}
	else if (q->front == q->size-1)
		q->front = 0;
	else
		q->front++;

	return data;
}

void displayQueue(circ_queue *q)
{
	if (q->front == -1)
	{
		printf("\nQueue is Empty");
		return;
	}
	printf("\nElements in Circular Queue are: ");
	if (q->rear >= q->front)
	{
		for (int i = q->front; i <= q->rear; i++)
			printf("%d ",q->arr[i]);
	}
	else
	{
		for (int i = q->front; i < q->size; i++)
			printf("%d ", q->arr[i]);

		for (int i = 0; i <= q->rear; i++)
			printf("%d ", q->arr[i]);
	}
}

int check_size(circ_queue *q)
{
	if ((q->front == 0 && q->rear == q->size-1) || (q->rear == (q->front-1)%(q->size-1)))
	{
		return q->size;
	}
	else if(!(q->front))
	{
		return q->rear;
	}
	else
	{
		return (q->size-abs(q->rear-q->front));
	}
}

void check_empty(circ_queue *q)
{
	if (q->front == -1)
	{
		printf("\nQueue is Empty");
	}
	else
	{
		printf("\nQueue is not Empty");
	}
	return;
}
