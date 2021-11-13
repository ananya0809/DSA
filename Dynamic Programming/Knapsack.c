#include<stdio.h>
int main()
{
	int P[5] = {0,1,2,5,6};
	int W[5] = {0,2,3,4,5};
	int m = 8, n = 4;
	int K[n+1][m+1];
	int i,w;
	for(i=0;i<=n;i++)
	{
		for(w=0;w<=m;w++)
		{
			if(i==0 || w==0)
			{
				K[i][w] = 0;
			}
			else if (W[i-1] <= w)
			{
				K[i][w] = max(P[i-1] + K[i-1][w-W[i-1]],K[i-1][w]);
			}
			else 
			{
				K[i][w] = K [i-1][w];
			}
		}
	}
	printf("%d",K[n][m]);
}
int max(int a, int b)
{ 
	return (a > b)? a : b; 
}

