#include<stdio.h>
int main()
{
	int m;
	printf("enter weight of knapsack: ");
	scanf("%d",&m);
	int n;
	printf("enter number of items: ");
	scanf("%d",&n);
	int w[n],p[n],i;
	
	for (i=0;i<n;i++)
	{
		printf("enter the weight of item %d: ",i+1);
		scanf("%d",&w[i]);
		printf("enter the profit of item %d: ",i+1);
		scanf("%d",&p[i]);
	}
	float r[n],max;
	for (i=0;i<n;i++)
	{
		r[i] = ((float)p[i]/(float)w[i]);
		printf("the profit by weight ratio of item %d = %.2f\n", i+1, r[i]);
	}
	for(i=0;i<n;i++)
	{
		if(r[0] < r[i])
		{
			r[0] = r[i];
			max = r[i];
		}
	}
	
	printf("%.2f",max);
	
}
