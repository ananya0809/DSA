// HOW TO CREATE OBJECT OF STRUCT (RECTANGLE) IN HEAP:
#include<stdio.h>
#include<stdlib.h>
struct rectangle
{
	int length;
	int breadth;
};
int main()
{
	struct rectangle *p;// created in stack
	p = (struct rectangle *)malloc(sizeof(struct rectangle));// creating object in heap
	// in the above statement, malloc function will allocate memory equivalent to the size of structure rectangle, i.e. 8 Bytes.
	// here instead of sizeof(struct rectangle), we can also write 8.
	// malloc functions returns a void pointer, thus we typecast it to (struct rectangle *).
	// by using statement 12, an object - rectangle will be created in heap and the pointer p will point on it.
	p->length = 15;
	p->breadth = 7; // here -> operator is used because there is a pointer p to the structure rectangle.
	printf("%d\n",p->length);
	printf("%d\n", p->breadth);
	return 0;
}
