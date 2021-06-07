#include "stack.h"

int UnwrapInt(int *data) {
	return (*(int*)(data));
}

int* WrapInt(int data) {
	int* wrap=malloc(sizeof(*wrap));
	(*wrap)=data;
	return wrap;
}

void Free_Data_IntPtr(void* data) {
	free(data);
}

int main() {
	Stack_Node* stack=NULL;
	Stack_Node* node=NULL;
	bool first=true;

	(void)Stack_Push(&stack,WrapInt(4));
	(void)Stack_Push(&stack,WrapInt(4));
	(void)Stack_Push(&stack,WrapInt(3));
	(void)Stack_Push(&stack,WrapInt(4));
	(void)Stack_Push(&stack,WrapInt(1));

	Stack_Node* iter=stack;
	while(iter) {
		if(first) first=false; else printf(", ");
		printf("%d",UnwrapInt(iter->data));
		iter=iter->next;
	}
	printf("\n");

	Stack_Clear(&stack,Free_Data_IntPtr);



	return 0;
}
