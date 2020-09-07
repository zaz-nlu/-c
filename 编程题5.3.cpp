#include <stdio.h>
#define WEEK 7
int main(void)
{
	int day,week,input;
	printf("Convert of weeks and days\n");
	printf("Please input a number:");
	scanf("%d",&input);
	while(input>0)
	{
		week=input/WEEK;
		day=input%WEEK;
		printf("%d day is %d week and %d day\n",input,week,day);
		printf("Please input a number of :");
		scanf("%d",&input);
	}
	printf("Program exit!");
	return 0;
}
