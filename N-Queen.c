#include<stdio.h>
int main()
{
	/*int n;
	printf("enter value of n ");
	scanf("%d",&n);*/
	int i,j,k;
	int A[4][4];
	int Q1, Q2, Q3, Q4;
	for (i=0; i<4;i++)
	{
		Q1 = A[1];
		Q2 = A[2];
		Q3 = A[3];
		Q4 = A[4];
		for(j=0; j<4;j++)
		{
			printf("0\t",A[i][j]);
		}
		printf("\n");
	}
	printf("enter position of Q1 ");
	for (i=0; i<4;i++)
	{
		for(j=0; j<4;j++)
		{
			scanf("%m%n\n",&A[i][j]);
		}
		printf("\n");
	}
	
	if(Q1 == &A[1][1])
	{
		Q2 != &A[2][1] && Q2 != &A[2][2];
		if (Q2 == &A[2][3])
		{
			Q3 != &A[3][1] && Q3 != A[3][2] && Q3 != &A[3][3] && Q3 != &A[3][4];
			printf("no feasible solution at Q1 = A[1][1]");
		}
		else if (Q2 == &A[2][4])
		{
			Q3 != &A[3][1] && Q3 != &A[3][3] && Q3 != &A[3][4];
			if(Q3 == &A[3][2])
			{
				Q4 != &A[4][1] && Q4 != &A[4][2] && Q4 != &A[4][3] && Q4 != &A[4][4];
				printf("no feasible solution at Q1 = A[1][1]");
			}
		}
	}
	
	
}

