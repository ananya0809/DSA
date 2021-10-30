#include<stdio.h>
void bubblesort(int A[],int n)
{
	int i,k,temp;
	for(k=1;k<=n-1;k++)
	{
		int flag = 0;
		for(i=0;i<=n-k-1;i++)
		{
			if (A[i]>A[i+1])
			{
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
}
int main()
{
	int i,j,p,min,n;
	printf("enter value of n\n");
	scanf("%d",&n);
	int A[n];
	//int A[6] = {15, 7, 3, 4, 22, 35};
	printf("enter values in array\n");
	for(p = 0; p < n; p++)
	{
		scanf("%d",&A[p]);
	}
	bubblesort(A,n);
	printf("sorted array\n");
	for(p = 0; p < n; p++)
	{
		printf("%d\n",A[p]);
	}
	return 0;
}
	
