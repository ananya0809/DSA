#include<stdio.h>
int main()
{
	int P[5] = {0,1,2,5,6};
	int W[5] = {0,2,3,4,5};
	int m = 8, n = 4;
	int K[5][9];
	int i,w;
	for(i=0;i<=n;i++)
	{
		for(w=0;w<=m;w++)
		{
			if(i==0 || w==0)
			{
				K[i][w] = 0;
			}
			else if (W[i] <= w)
			{
				K[i][w] = max(P[i] + K[i-1][w-W[i]],K[i-1][w]);
			}
			else 
			{
				K[i][w] = K [i-1][w];
			}
		}
	}
	printf("%d",K[n][w]);
}
