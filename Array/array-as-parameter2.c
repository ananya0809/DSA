#include<stdio.h>
void fun(int A[] /* we can also use *A without any other changes */, int n)// this A is different from the one in the main() function as it is a POINTER to an array.
// usually we pass size also as a parameter so that fun() knows the size of the array.
{
	// since this array is passed by address, so if we make changes to the values of array in this function, it will alter them in the actual array as well.
	A[0] = 15; // here 2 changes to 15 everywhere bec int A[]/ int *A is a pointer.
	int j;
	int p = sizeof(A)/sizeof(int);// here A is not giving the size of array in main() i.e. 5. 
	//It is giving the size of A in fun() which is a pointer & pointer takes 8 BYTES of memory.
	// since int = 4 BYTES thus the division gives an answer 2.
	printf("when the division statement is in fun() = %d\n", p);
	for (j=0; j<n /*5*/; j++)// n = 5// after adding size as a parameter in fun(), we can substitute n in place of 5.
	// by adding int n as a parameter, if the number of elements in array in main() increase, then there will be no issues in this stmt.
	// this loop will easily exe for any size of array.
	{
		printf("%d\n", A[j]);// it will get executed if we are using FOR LOOP 
	}
}
int main()
{
	int A[] = {2, 4, 6, 8, 10};// size = 5
	int n=5, i;
	fun(A,n);// now after passing A, theyre the same.
	int p = sizeof(A)/sizeof(int);// prints the size of array A[].
	printf("when the division statement is in main() = %d", p);
	printf("\n");
	for (i=0; i<n; i++)
	{
		printf("%d  ", A[i]);
	}
	return 0;
}
/* inside the main() we have created an array A[5] and when we pass it to a function fun(),
it takes it as a pointer to an array.*/
