
#include <stdio.h>

void printarray(int a[]);

void downheap (int a[],int N,int k)
{
	int j,v;
	v = a[k];

	while (k <= N/2) {
		j = k+k;
		if(j<N && a[j]<a[j+1]) 
			j++;
		if(v >= a[j])
			break;
		a[k] = a[j];
		k = j;
	}
	a[k] = v;
}

void heapsort (int a[],int N)
{
	int k,t;

	for (k = N/2;k >= 1; k--) 
		downheap(a,N,k);

	while (N >1) {
		t = a[1];
		a[1] = a[N];
		a[N] = t;
		downheap(a,--N,1);
	}
}

int main()
{
	int b[10] = {1000,2,5,8,19,17,34,1,23,25};
	printarray(b);
	heapsort(b,10-1);
	printarray(b);
}

