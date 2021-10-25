#include<stdio.h>
void merge( int l, int mid, int h)
{
	int i = 1,j = 1,k = 1;
	int A[i],B[j],C[k];
	while ( i <= l && j <= h)
	{
		if (A[i] < B[j])
		{
			C[k++] = A[i++];
		}
		else
		{
			C[k++] = B[j++];
		}
	}
	for (i = 0; i <= l; i++)
	{
		C[k++] = A[i];
	}
	for (j = 0; j <= h; j++)
	{
		C[k++] = B[j];
	}
}
void mergesort (int l, int h)
{
	//int n;
	if (l < h)
	{
		int mid = (l+h)/2;
		mergesort(l,mid);
		mergesort(mid+1,h);
		merge(l,mid,h);
	}
	else
		return;
}
int main()
{
	int i,n;
	printf("enter value of n\n");
	scanf("%d",&n);
	int A[n];
	//int A[6] = {15, 7, 3, 4, 22, 35};
	printf("enter values in array\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&A[i]);
	}
	mergesort(0,n);
	printf("sorted array\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
	
	
