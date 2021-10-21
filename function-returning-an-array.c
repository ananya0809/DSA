#include<stdio.h>
void * fun(int size)// [] are not supported by all compilers, so use *
// this function creates an array and returns its pointer.
{
	int *p;// this pointer is be used to create an array by using malloc function.
	p = (int *)malloc(size*sizeof(int));// array created using malloc in HEAP (DYNAMICALLY).
	int i;
	for(i = 0; i<size; i++)// array is being initialized
	{
		p[i] = i+1;
	}
	return p;// returns the pointer to the array
}	
int main()
{
	int *diffptr, size1 = 7;// --> just by changing the size HERE, we can create a diff size array. <--
	diffptr = fun(size1);// calling function fun() by passing size from main().
	// this creates an array of 5 with return address stored in pointer from main().
	int i;
	for (i = 0; i<size1; i++)
	{
		printf("%d\n", diffptr[i]);
	}
	return 0;
}
// NOTE: here in the main func there is no array. fun() only is creating an array of given size and initializing all ele.
// the return pointer from fun() is taken by diffptr in main() and main() uses that array.
// USE: array is created in heap in a different function but even main() can access it using pointers.
// ANYTHING CREATED IN HEAP CAN BE ACCESSED FROM ANYWHERE IN THE PROG BY USING POINTERS.

