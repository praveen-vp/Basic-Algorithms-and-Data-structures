// Eclid's method : Let u and v are the two given numbers, then the greatest
// common divisor of the u and v is the same as the greatest common divisor
// of v and u%v, given u > v.

// C Program 
#include <stdio.h>

int gcd (int u, int v) {

	int t;
	while (u > 0) {
		if (u < v) {
			t = u;
			u = v;	v = t;
		}
		u = u-v;
	}
	return v;
}

int gcdR (int u,int v) {

	if(u%v == 0) 
		return v;
	else 
		return gcdR(v,u%v);
}

main() 
{
	printf("%d\n",gcd(10,-15));
	printf("%d\n",gcdR(10,15));

}

