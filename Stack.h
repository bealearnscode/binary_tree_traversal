//#ifndef NODES_H_
//#define NODES_H_
#include "Node.h"
#include<stdio.h>
#include <cstdlib>
typedef struct Node Node;
struct Stack
{
	int size;
	struct Node **S;
	int top;
};

void stackCreate(struct Stack *s, int size)
{
	s->size = size;
	s->top = 0;
	s->S = (struct Node **)malloc(s->size * sizeof(struct Node*));
}

void push(struct Stack *s, Node *x)
{
	if (s->top==s->size-1)
		printf("Stack is Full\n");
	else
	{
		s->top = (s->top + 1) % s->size;
		s->S[s->top] = x;
	}
}

struct Node * pop(struct Stack *s)
{
	Node *x = NULL;
	if (s->top==0)
		printf("Stack is Empty\n");
	else
	{
		x = s->S[s->top];
		s->top--;
	}
	return x;
}

int isEmpty(struct Stack s)
{
	if (s.top == 0)
		return 1;
	else
		return 0;
}