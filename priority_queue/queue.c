
#include <stdio.h>

void printarray(int a[]);
void printarraynum(int a[],int j);

#define maxN 100

static int a[maxN+1],N;
int b[10] = {12,33,4,15,6,10};//12,14,16,18};

void construct (int b[],int M)
{
	for (N = 0;N <= M;N++)
		a[N] = b[N];
	N--;
}

void insert (int v)
{
	a[N++] = v;
}

int remove_queue(void) 
{
	int j,max,v;
	max = 0;

	for (j = 1;j<=N; j++)
		if (a[j] > a[max])
			max = j;

	v = a[max];
	a[max] = a[N--];
	a[N++] = '\0';
	return v;
}

int main()
{
	construct(b,6);
	printarray(a);
	
	insert(23);
	printarray(a);
	
	insert(25);
	printarray(a);
	
	printf("%d\n",remove_queue());
	printarray(a);
	
	printf("%d\n",remove_queue());
	printarray(a);

	printf("%d\n",remove_queue());
	printarray(a);

	printf("%d\n",remove_queue());
	printarray(a);
}

