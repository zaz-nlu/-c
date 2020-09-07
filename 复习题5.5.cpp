#include <stdio.h>
#define STOM 60 

int main(int argc,char *argv[])
{
	int sec=1,min,left;
	printf("This program convert seconds to minutes and ");
	printf("seconds,\n");
	printf("Just enter the number of secondes.\n");
	printf("Enter 0 to end and program .\n");
	while (sec>0)
	{
		scanf("%d",&sec);
		min = sec/STOM;
		left = sec % STOM;
		printf("%d sec is %d min %d sec.\n",sec,min,left);
		printf("Next input?");
		
	}
	printf("Bye! \n");
	return 0;
 } 
