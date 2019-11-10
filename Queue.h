//#ifndef NODES_H_
//#define NODES_H_
#include "Node.h"
#include<stdio.h>
#include <cstdlib>
using namespace std;
struct Queue
{
	int size;
	int front;
	int rear;
	struct Node **Q;
};

void create(struct Queue *q, int size)
{
	q->size = size;
	q->front = q->rear = 0;
	q->Q = (struct Node **)malloc(q->size * sizeof(struct Node*));
}

void enqueue(struct Queue *q, Node *x)
{
	if ((q->rear+1)%q->size == q->front)
		printf("Queue is Full\n");
	else
	{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear] = x;
	}
}

struct Node * dequeue(struct Queue *q)
{
	Node *x = NULL;
	if (q->front == q->rear)
		printf("Queue is Empty\n");
	else
	{
		q->front = (q->front + 1)%q->size;
		x = q->Q[q->front];
	}
	return x;
}

int isEmpty(struct Queue q)
{
	if (q.front == q.rear)
		return 1;
	else
		return 0;
}