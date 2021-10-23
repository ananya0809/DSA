#include<stdio.h>
// the below function is suitable for & is using CALL BY VALUE for parameter passing
int add(int a, int b)// int is put to declare the data type of return in the function
{
	int c;
	c = a+b;
	return c;
}
int main()
{
	int x= 10;
	int y= 15;
	int sum;// if we dont have this, we arent using the return from the func in any variable.
	sum = add(x,y);// function calling & return value of add() i.e. c will be copied in sum.
	printf("%d",sum);
}
// here the formal parameters (a,b) will not change the value of actual parameters (x,y).
