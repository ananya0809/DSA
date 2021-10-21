#include<stdio.h>
int main()
{
	int a = 10;
	int r;
	int &r = a;// & at time of declaration means reference. Refedrence IS initialized
	//r = a; reference is NOT initialized.
	
	int b= 25;
	r = b;
	printf("%d", b);
	return 0;
}
