#include<stdio.h>
#include<stdlib.h>// for malloc function
int main()
{
	int *p;//inside stack
	p = (int*)malloc(5*sizeof(int));// inside heap// ALLOCATING: new memory is created using malloc() function.
	p[0] = 10; 
	p[1] = 15;
	p[2] = 14;
	p[3] = 21;
	p[4] = 31; // array created in heap
	int i;
	for (i=0;i<5;i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);// DEALLOCATING: after using the created memory, we must also delete/free that memory
	for (i=0;i<5;i++)
	{
		printf("%d\n", p[i]); // random numbers/ GARBAGE VALUES are printed after deallocating the memory.
	}
	return 0;
}

// this program's array is created in heap.
