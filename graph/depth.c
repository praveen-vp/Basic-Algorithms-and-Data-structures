
#include "graph.h"

void print(struct node* current);

struct node* adj[maxV];

struct node* adjlist(void) 
{
	struct node* adj = malloc(sizeof(struct node));
	adj->data = 1;
	adj->next = malloc(sizeof(struct node));
	adj->next->data = 2;
	adj->next->next = malloc(sizeof(struct node));
	adj->next->next->data = 4;
	adj->next->next->next = 0;

	return adj;
}

void adjarray(struct node* adj[]) 
{
	adj[1] = malloc(sizeof(struct node));
	adj[1]->data = 1;
	adj[1]->next = malloc(sizeof(struct node));
	adj[1]->next->data = 2;
	adj[1]->next->next = malloc(sizeof(struct node));
	adj[1]->next->next->data = 4;
	adj[1]->next->next->next = 0;

	adj[2] = malloc(sizeof(struct node));
	adj[2]->data = 2;
	adj[2]->next = malloc(sizeof(struct node));
	adj[2]->next->data = 4;
	adj[2]->next->next = malloc(sizeof(struct node));
	adj[2]->next->next->data = 5;
	adj[2]->next->next->next = 0;

	adj[3] = malloc(sizeof(struct node));
	adj[3]->data = 3;
	adj[3]->next = malloc(sizeof(struct node));
	adj[3]->next->data = 4;
	adj[3]->next->next = 0;

	adj[4] = malloc(sizeof(struct node));
	adj[4]->data = 4;
	adj[4]->next = malloc(sizeof(struct node));
	adj[4]->next->data = 2;
	adj[4]->next->next = 0;

}
/*
int val[MaxV];
int id = 0;

void visit (int k) 
{
	struct node *t;
	val[k] = ++id;
	
	for (t = adj[k];t != z; t = t->next) 
	   if (val[t->v] == 0)
	   visit (t->v);
}

void listdfs (void)
{
	int k;

	for (k = 1; k <= v; k++)
		val[k] = 0;
	for (k = 1; k <= v; k++)
		if (val[k] == 0)
			visit (k);
}
*/

int main()
{
	int i = 0;
	struct node* p = malloc(sizeof(struct node));
	p->data = 5;
	p->next = malloc(sizeof(struct node));
	p->next->data = 2;
	p->next->next = malloc(sizeof(struct node));
	p->next->next->data = 3;
	p->next->next->next = NULL;
	print(p);

	adjarray(adj);

	while(i <= 4)
		print(adj[i++]);
}

