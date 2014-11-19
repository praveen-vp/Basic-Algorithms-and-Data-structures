
// selection sorting example problem....

#include <stdio.h>
//void printarray(int a[]);

void selection (int a[],int n) 
{
	int i,j,min,t;
	for (i = 0;i < n;i++) {
		min = i;
		for (j = i+1;j <= n;j++)
			if(a[j] <= a[min])
				min = j;
		t = a[min];
		a[min] = a[i];
		a[i] = t;
	}
}


int main()
{
	int a[20] = {1,4,2,13,5,9,49,9,43,25,30,35,40,45};
	printarray(a);
	selection(a,13);
	printarray(a);

}

