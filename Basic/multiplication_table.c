#include<stdio.h>
int main()
{
	int i,n,j,c,prod;
	printf("enter number of rows: ");
	scanf("%d",&n);
	printf("enter number of columns: ");
	scanf("%d",&c);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=c;j++)
		{
			prod=i*j;
			printf("%d * %d = %d \n",i,j,prod);
		}
	}
	return 0;
}
