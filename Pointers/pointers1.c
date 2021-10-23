#include<stdio.h>
int main()
{
	int a= 10;// consumes 4 Bytes in memory
	int *p;//* is used only at the time of declaration or dereferencing.
	p = &a;// we have assigned the address of a to p
	//*p = &a; will give error due to *p.
	printf(" value: using pointer %d\n", *p);// here *p is used for dereferencing to print value of a
	printf("address: using pointer %d, %d\n", p, &a);// here p will return the address of a similarly as &a
	return 0;
}
