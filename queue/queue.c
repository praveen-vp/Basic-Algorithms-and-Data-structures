
#include <stdio.h>

#define qmax 100

static int queue[qmax+1],qhead,qtail;

void put (int v) 
{
	queue[tail++] = v;
	if(tail >qmax)
		tail = 0;
}

int get ()
{
	int t = queue[head++];
	if (qhead >qmax)
		qhead = 0;
	return t;
}
void queueinit(void)
{
	qhead = 0;
	tail = 0;
}

int queueempty()
{
	return qhead == tail;
}

