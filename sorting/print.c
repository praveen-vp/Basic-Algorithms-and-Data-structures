

// array printing helper program.
// prints the intiger array...

#include <stdio.h>

void printarray(int a[])
{ 
	int i = 0;
	for(;a[i] != '\0';i++) 
		printf("%d ",a[i]);
	printf("\n");
}
	
