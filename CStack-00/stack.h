#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Stack_Node Stack_Node;

struct Stack_Node {
	int data;
	Stack_Node *next;
};

Stack_Node* Stack_Push(Stack_Node** top,int data);
Stack_Node* Stack_Pop(Stack_Node** top);
bool Stack_IsEmpty(Stack_Node** top);
Stack_Node* Stack_Peek(Stack_Node** top);

#endif
