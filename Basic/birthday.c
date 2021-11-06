#include<stdio.h>
#include<time.h>
int main()
{
	int date, month, year;
	printf("Enter your Date of Birth in format dd-mm-yyyy\n");
	scanf("%d-%02d-%02d\n",&date, &month, &year);
	time_t day = time(NULL);
	struct tm tm = *localtime(&day);
	printf("Today is %d-%02d-%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
	if((tm.tm_year + 1900)>=year)
	{
		if(tm.tm_mday == date && (tm.tm_mon+1) == month)
		{
			printf("HAPPY BIRTHDAY!!");
		}
		else
		{
			printf("Sorry! Today is not your birthday :(");
		}
	}
	else
	{
		printf("Looks like you haven't been born yet!");
	}
}
