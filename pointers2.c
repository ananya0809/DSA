#include<stdio.h>
int main()
{
	int A[5] = {2, 4, 6, 8, 10};
	int *p, i;
	p = A;// here &A is not used because A is an array
	for (i=0;i<5;i++)
	{
		printf("%d\n", p[i]);
	}
	//printf("%d\n", &p[i]); prints address of each element in array
	return 0;
}
// this program's array is created in stack.
