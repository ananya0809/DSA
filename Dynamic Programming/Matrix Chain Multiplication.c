#include<stdio.h>
int main()
{
	int n = 5;
	int D[] = {5,4,6,2,7};
	int M[5][5];
	int K[5][5] = {0};
	int i,j,k,d,min,q;
	for (i=1; i<n; i++)
	{
		M[i][i] = 0;
	}
	for(d=2;d<n;d++)
	{
		for(i=1;i<n-d+1;i++)
		{
			j=i+d-1;
			min = 32767;
			for(k=1;k<=j-1;k++)
			{
				q=M[i][k] + M[k+1][j] + D[i-1]*D[k]*D[j];
				if(q<min)
				{
					min = q;
					K[i][j] = k;
				}
			}
			M[i][j] = min;
		}
	}
	printf("The minimum cost = %d",M[1][n-1]);
}
