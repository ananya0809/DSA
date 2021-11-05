#include<stdio.h>
int main()
{
	int i,n,pdt=1;
	printf("Enter number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		pdt*=i;
	}
	printf("factorial of %d is %d",n,pdt);
	return 0;
}
