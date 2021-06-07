#include "stack.h"



int* WrapInt(int data) {
	int* wrap=malloc(sizeof(*wrap));
	(*wrap)=data;
	return wrap;
}



int UnwrapInt(int *data) {
	return (*(int*)(data));
}



void Print_Data_Int(void* data) {
	printf("%d",UnwrapInt(data));
}



void Free_Data_Int(void* data) {
	free(data);
}



int main() {
	Stack_Node* stack=NULL;
	Stack_Node* node=NULL;

	(void)Stack_Push(&stack,WrapInt(4));
	(void)Stack_Push(&stack,WrapInt(4));
	(void)Stack_Push(&stack,WrapInt(3));
	(void)Stack_Push(&stack,WrapInt(4));
	(void)Stack_Push(&stack,WrapInt(1));

	Stack_Print(&stack,Print_Data_Int);

	Stack_Clear(&stack,Free_Data_Int);

	return 0;
}

