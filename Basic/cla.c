#include<stdio.h>
#include<conio.h>
int main(int argc, char* argv[])
{
	FILE *fp;
	int i;
	char word [15];
	fp=fopen(argv[1],"w");
	printf("no. of command line arguments = %d\n", argc);
	for (i=2;i<argc;i++)
	{
		fprintf(fp,"%s",argv[i]);
	}
	fclose(fp);
	printf ("contents of %s file",argv[1]);
	fp=fopen(argv[1],"r");
	for (i=2;i<argc;i++)
	{
		fscanf(fp,"%s",word);
		printf("%s",word);
	}
	fclose(fp);
		for (i=1;i<argc;i++)
		{
			printf("%s \n",argv[i]);
		}
	getch();
return 0;		
}
