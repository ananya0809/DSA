#include<iostream>
using namespace std;
// using CALL BY REFERENCE in C++
void swap (int &x, int &y)// here x means a (nickname for a)// this is possible with the help of inline function.
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}// this swap function MAY or MAY NOT become inline function depending upon the compiler.
int main()
{
	int a = 10;
	int b = 20;
	swap (a,b);// the inline function will copy the entire swap funtion here, else it will make int &x,y as pointers
	printf("%d ,%d", a,b);
	return 0;
}
