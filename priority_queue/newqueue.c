
#include <stdio.h>

#define  MAX 100

void printarray(int a[]);
void printarraynum(int a[],int j);

static int queue[MAX+1], N;
int a[10] = {7,1,12,23,42,33,10,2,9,22};

void construct(int b[], int M) {

	for(N=0; N <= M-1; N++)
		queue[N] = b[N];
}

void insert(int v) {

	queue[N++] = v;
}

int q_remove(void) {
	
	int i=0, max=0;
	for(;i<=N;i++) {
		if(queue[i] > queue[max])
			max = i;
	}
	
	i = queue[max];
	queue[max] = queue[--N];
	queue[N] = 0;

	return i;
}

int main()
{
	construct(a,10);
	printarray(queue);
	
	insert(11);
	printarray(queue);
	
	printf("%d\n",q_remove());
	printarray(queue);
	
	printf("%d\n",q_remove());
	printarray(queue);
	
	printf("%d\n",q_remove());
	printarray(queue);

	printf("%d\n",q_remove());
	printarray(queue);

	printf("%d\n",q_remove());
	printarray(queue);
	
	printf("%d\n",q_remove());
	printarray(queue);

	insert(15);
	printarray(queue);
	
	insert(18);
	printarray(queue);
	
	printf("%d\n",q_remove());
	printarray(queue);
}

