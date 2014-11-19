

#include <stdio.h>

int binarysearch(int a[],int x,int max)
{
	int mid = 0;
	int low = 0;
	max--;

	while (low <= max) {
		mid = (max+low)/2;

		if (a[mid] < x)
			low = mid+1;
		else if (a[mid] == x)
			return mid;
		else if (a[mid] > x)
			max = mid - 1;
		}
	return -1;
}

int main()
{
	int a[10] = {1,2,4,6,8,10,12,23,24,45};

	printf("%d\n",binarysearch(a,6,10));
}

