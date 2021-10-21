#include<stdio.h>
int main()
{
	int A[5] = {12,15,25,30};// a variable sized array cannot be initialized; A[n] = {2,3,4,5} will give an error. In this case non initialized elements will give garbage values.
	int i;
	for (i=0;i<5;i++)
	{
		printf("%d\n",A[i]);
	}
	printf("%d\n", sizeof(A));//size of array A[5] = size of int = 4 bits * size of array = 5 thus, 4*5. if size of int = 2, then 2*5 = 10
	printf("%d\n", sizeof(A[5]));// size of int = 4
	// if i print the 5th element in array of 4, answer is 0. <- here A[5] is there; if it were A[n], answer is GARBAGE VALUE.
	return 0;
}
// 0 is also a garbage value- its a value that you have not assigned
