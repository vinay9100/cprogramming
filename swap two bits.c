
#include<stdio.h>
int swapBits(int n, int p1, int p2)
{
	if (((n & (1 << p1)) >> p1) ^ ((n & (1 << p2)) >> p2))
	{
	n ^= 1 << p1;
	n ^= 1 << p2;
	}
	return n;
}

//Driver Code
int main()
{
	printf("Result = %d", swapBits(28, 0, 3));
	return 0;
}
