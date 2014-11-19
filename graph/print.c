
#include "graph.h"

void print(struct node* current)
{
	if(current == NULL) {
		printf("\n");
		return;
	}

	printf("%d-",current->data);
	print(current->next);

}

