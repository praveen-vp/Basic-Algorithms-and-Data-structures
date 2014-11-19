
/*
   method simple as selection sort and more flexible than selection sort.
   ====>
   		consider the elements one at a time, inserting each in its proper 
		place among those already considered. The element being considered 
		is inserted merely by moving larger elements one position to the 
		right, and then inserting the element in the vaccated position.
*/

#include <stdio.h>

void printarray(int a[]);

// insertion sorting example program .......
void insertionSort (int a[],int n)  
{
	int i,j,v;
	for(i = 2;i < n;i++) {
		v = a[i];
		j = i;
		
		while (a[j-1] > v) {
			a[j] = a[j-1];
			j--;
		}
		a[j] = v;
	}
}

main() 
{
	int a[10] = {12,23,45,3,5,9,10,1,2,9};
	printarray(a);
	insertionSort(a,10);
	printarray(a);
}
	
