
#include <stdio.h>
int main() 
{
	int i=0, x = 10;
	int p[32];
	printf("%d\n",x);

	for(i = 0;x != 0;i++) {	
		p[i] = x%2;
		printf("%d",p[i]);
		x = x/2;
	}
	p[i] = '\0';
	int j = i;
	i = 0;
	printf("\nsize :%d\n",j);
	
	while( i >= j ) {
		printf("%d",p[i]);
		i--;
	}
return 0;
}

