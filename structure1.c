#include<stdio.h>
struct rectangle
{
	int length;//4 bytes
	int breadth;//4 bytes
	char x;//PADDING (adjustment in memory - happens in structures): here it is allocating 4 bytes but using only 1 byte. this is so because it is easy for machine to get 4 bytes than 1.
};//1
//2
int main()
{
	struct rectangle r;// you can declare this in position 1 & 2 also.
	r.length = 10;
	r.breadth = 5;
	printf("%d\n", sizeof(r));// this will be 12 (4+4+4) instead of 9 (4+4+1).
	printf("%d\n", r.length);
	return 0;
}
