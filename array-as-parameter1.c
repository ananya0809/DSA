#include<stdio.h>
void fun(int A[], int n)// we can use int A[] or int *A here
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("%d\n",A[i]);
	}
}
int main ()
{
	int A[5] = {2, 4, 6, 8, 10};
	fun(A,5);
	return 0;
}
