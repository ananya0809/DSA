#include<stdio.h>
#include<stdlib.h>// for malloc()
struct rectangle
{
	int length; // 4 B memory
	int breadth; // 4 B memory
};
int main()
{
	struct rectangle r = {10,5};// ONLY in C++ you can skip writing struct here
	printf("%d\n",r.length);
	printf("%d\n",r.breadth); // here normal variables are accessed using . operator
	
	struct rectangle *p = &r; // the declared pointer is created inside stack
	printf("%d\n", p->length);
	printf("%d\n", p->breadth); // here pointer variables are accessed using -> operator
		
	return 0;	
}
