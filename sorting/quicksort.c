
/* 
   Quick sort : It is a "divide and conquer" methode for sorting. 
   		It works by partitioning a file into two parts, then sorting
		the parts independently. As we will see, the exact position of 
		the partiotion depends on the file, so the algorithm has the
		following recursive structure.
*/

// Quick sort example program :==>>>

#include <stdio.h>
#include <stdlib.h>
#define max 3000000

void quicksort (int a[], unsigned long int l,unsigned long int r) 
{
	int i,v,j,t;
	if(r > l) 
	{
		v = a[r];
		i = l - 1;
		j = r;

		for (;;) {
			while (a[++i] < v);
			while (a[--j] > v);

			if(i >= j) 
				break;
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}

		t = a[i];
		a[i] = a[r];
		a[r] = t;
	
		quicksort (a,l,i-1);
		quicksort (a,i+1,r);
	}
}

void printarray (int a[]);
int main() 
{
	int a[max];// = { 19,1,4,6,7,12,9,66,23,34 };
	unsigned long int i;
	for (i = 0;i < max;i++)
		a[i] = rand()%7;

//	selection(a,max-1);
//	printarray(a);
	quicksort(a,0,max-1);
	printarray(a);
}

