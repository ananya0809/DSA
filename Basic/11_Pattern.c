#include<stdio.h>
int main()
{
	int i,j,k,r,c;
	printf("enter number of rows in matrix\n");
	scanf("%d",&r);
	printf("enter number of columns in matrix\n");
	scanf("%d",&c);
	int A[r][c], start = 0;
	int low = 0, high = c-1;
	//int mid = low + (high - low)/2;
	for(i=0; i<r-1; i++)
	{
		for(j=0; j<c-1; j++)
		{
			int mid = low + (high - low)/2;
			for(k=0; k<=mid; k++)
			{
				mid = start + 11;
				start = mid;
			}
		}
	}
	for(i=0; i<r-1; i++)
	{
		for(j=0; j<c-1; j++)
		{
			printf("%d\n",A[i][j]);
		}
	}
}
