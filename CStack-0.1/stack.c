#include "stack.h"



Stack_Node* Stack_Push(Stack_Node** top,void* data) {
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



void Stack_Clear(Stack_Node** top,void(*Stack_Data_Free)(void* data)) {
	while(!Stack_IsEmpty(top)) {
		Stack_Node* node=(*top);
		(*top)=(*top)->next;
		node->next=NULL;
		Stack_Data_Free(node->data);
		free(node);
	}
}



void Stack_Print(Stack_Node** top,void(*Print_Data)(void* data)) {
	Stack_Node* iter=(*top);
	bool first=true;
	while(iter) {
		if(first) first=false; else printf(", ");
		Print_Data(iter->data);
		iter=iter->next;
	}
	printf("\n");
}
