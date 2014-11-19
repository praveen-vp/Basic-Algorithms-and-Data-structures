
#include <stdio.h>

struct fraction { 
	int n;
	int d;
};

int gcdR (int u,int v) {

	if(u%v == 0) 
		return v;
	else 
		return gcdR(v,u%v);
}

struct fraction* minimize(struct fraction* p) 
{
	int divisor = gcdR (p->d,p->n);
	p->d /=divisor;
	p->n /=divisor;

	return p;
}

int main() 
{
	struct fraction q;
	q.n = 12;
	q.d = 16;
	struct fraction* p = &q;

	p = minimize(p);
	printf("%d/%d\n",p->n,p->d);
}
