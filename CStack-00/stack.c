#include "stack.h"



Stack_Node* Stack_Push(Stack_Node** top,int data) {
	Stack_Node* node=malloc(sizeof(*node));
	if(!node) {
		printf("Error: stack overflow\n");
		return NULL;
	}
	node->data=data;
	node->next=(*top);
	(*top)=node;
	return node;
}



Stack_Node* Stack_Pop(Stack_Node** top) {
	Stack_Node* node=NULL;
	if((*top)==NULL) {
		printf("Error: stack underflow\n");
		return NULL;
	}
	node=(*top);
	(*top)=(*top)->next;
	node->next=NULL;
	return node;
}



bool Stack_IsEmpty(Stack_Node** top) {
	return (*top)==NULL;
}



Stack_Node* Stack_Peek(Stack_Node** top) {
	if(!Stack_IsEmpty(top))
		return (*top);
	else
		printf("Error: stack is empty\n");
	return NULL;
}
