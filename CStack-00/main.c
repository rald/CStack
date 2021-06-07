#include "stack.h"

int main() {
	Stack_Node* stack=NULL;
	Stack_Node* node=NULL;
	bool first=true;

	(void)Stack_Push(&stack,4);
	(void)Stack_Push(&stack,4);
	(void)Stack_Push(&stack,3);
	(void)Stack_Push(&stack,4);
	(void)Stack_Push(&stack,1);

	while(!Stack_IsEmpty(&stack)) {
		if(first) first=false; else printf(", ");
		node=Stack_Pop(&stack);
		printf("%d",node->data);
		free(node);
	}
	printf("\n");

	return 0;
}
