#include<stdio.h>
struct rectangle
{
	int length;
	int breadth;
};
int main()
{
	int *p1; // should take 4 Bytes
	char *p2; // should take 1 Byte
	float *p3; // should take 4 Bytes
	double *p4;	 // should take 8 Bytes
	struct rectangle *p5; // should take 4*2 = 8 Bytes
	
	printf("%d\n", sizeof(p1));
	printf("%d\n", sizeof(p2));
	printf("%d\n", sizeof(p3));
	printf("%d\n", sizeof(p4));
	printf("%d\n", sizeof(p5)); // but all are 8 bytes due to PADDING!! This is because the highest memory to be allocated is of 8 bytes so the system takes 8 bytes but uses 1 or 4 or 8 Bytes as per requirement.
	// size of a pointer is independent of its data type.
	return 0;
}
