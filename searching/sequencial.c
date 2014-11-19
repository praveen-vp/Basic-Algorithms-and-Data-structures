
#include <stdio.h>

int sequencial (int a[],int x) 
{
	int i = 0;
	for(;a[i] != '\0';i++)
		if(a[i] == x)
			return 1;
	return 0;
}

int main()
{
	int a[10] = {1,2,34,5,7,9,10,12,4,55};

	printarray(a);

	printf("%d\n",sequencial(a,4));
}
