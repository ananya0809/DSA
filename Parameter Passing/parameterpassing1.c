#include<stdio.h>
// the below function is suitable for and is an example of CALL BY ADDRESS in parameter passing 
void swap (int *x, int *y)// formal parameters are of type POINTERS
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}// here void is used because the swap() doesnt have to return anything. Whatever the result is , it is reflected in the actual parameters.
int main()
{
	int a = 10;
	int b = 20; // the pointers x,y are indirectly accessing these values
	swap (&a,&b);// here the address of actual parameters are passed in formal parameters.
	printf("%d, %d",a,b);// here the swap function has modified the values of actual parameters unlike call by value.
	return 0;
	
}
