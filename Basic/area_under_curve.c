#include<stdio.h>
int  main()
{
	int n,a,b,x,d,h1,h2,l,area,aoc,sum;
	printf("enter upper limit");
	scanf("%d",&b);
	printf("enter lower limit");
	scanf("%d",&a);
	printf("enter number of trapezoids");
	scanf("%d",&n);
	d=(b-a)/n;
	sum=0;
	for (l=a;l<=b-d;l=l+d)
	{
	h1=l*l+1;
	h2=(l+d)*(l+d)+1;
	area=0.5*(h1+h2)*d;	
	sum=sum+area;
	}
	aoc=sum;
	printf("the area under the curve = %d",aoc);
	return 0;
}	

