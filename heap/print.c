

// array printing helper program.
// prints the intiger array...

#include <stdio.h>

void printarray(int a[])
{ 
	int i = 1;
	for(;a[i] != '\0';i++) 
		printf("%d ",a[i]);
	printf("\n");
}
	
void printarraynum(int a[],int j)
{ 
	int i = 0;
	for(;i <= j;i++) 
		printf("%d ",a[i]);
	printf("\n");
}
	
