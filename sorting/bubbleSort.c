
/*
   Bubble sort : keep passing through the list, exchanging adjacent elements
   if neccessory, when no exchanges are required the file is sorted.
*/

#include <stdio.h>

void printarray(int a[]);

void bubbleSort(int a[],int n)
{
	int i,j;
	for (i = n;i >= 1;i--)
		for(j = 0;j <= i;j++)
			if(a[i] <= a[j]) {
				int t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
}

int main() 
{
	int a[10] = {1,3,1,4,8,10,9,4,90,25};
	printarray(a);
	bubbleSort(a,9);
	printarray(a);
}


