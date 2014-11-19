
// non recursive quicksort.....
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void quicksort (int a[],int n) 
{
	int i,j,l,r;
	l = 1;
	r = n;
	stackinit();

	for (;;) {
		while (r > l) {
			i = partition (a,l,r);

			if (i-l > r-i) {
				push (l);
				push (i-1);
				l = i+r;
			}
			else {
				push (i+1);
				push (r);
				r = i-1;
			}

			if(stackempty()) 
				break;
			r = pop();
			l = pop();
		}
	}
}

