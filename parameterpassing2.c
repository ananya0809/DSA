#include<iostream>
using namespace std;
// using CALL BY REFERENCE
void swap (int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	swap (a,b);
	printf("%d ,%d", a,b);
	return 0;
}
