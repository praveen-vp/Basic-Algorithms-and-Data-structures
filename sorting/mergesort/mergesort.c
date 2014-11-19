
#include <stdio.h>

int b[100];
// int a[100]  = {2,23,4,54,3,2,983,90,25};
int a[100] = {5,3,2,8};

void printarray(int a[]);

void mergesort(int a[],int l,int r)
{
	int i,j,k,m;

	if (r > l) {
		m = (r+l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);

		for (i = m+1; i > l; i--)
			b[i-1] = a[i-1];
		for (j = m; j < r;j++)
			b[r+m-j] = a[j+1];
		for (k = l; k <= r; k++)
			a[k] = (b[i] < b[j]) ? b[i++] : b[j--];
		
		printarray(a);
	}

}


int main()
{
	printarray(a);
	printf ("ooooooooooooooooooo\n");
	mergesort(a,0,2);
	printf("********************\n");
	printarray(a);
}

