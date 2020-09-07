#include <stdio.h>
#define MIN 60
int main (int argc,char *argv[])
{
	int hours,minutes,input;
	printf("CONVERT MINUTES TO HOURS!\n");
	printf("PLEASE INPET NUMEROUS OF MINUTES (<=0 TO QUIT)");
	scanf("%d",&input);
	while(input>0);
	{
		hours=input/MIN;
		minutes=input%MIN;
		printf("CONVERT TO %d HOUR AND %d MINUTES ");
		printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES (<= TO QUIT):");
		scanf("%d",&input); 
	}
	printf("PROGRAM EXIT!\n");
 } 
