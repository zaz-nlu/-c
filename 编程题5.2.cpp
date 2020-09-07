#include <stdio.h>
int main(int argc,char *argv[])
{
	int number,i=0;
	printf("Print countinue 10 numbers.\n");
	printf("Please enter a number of:");
	scanf("%d",&number);
	while(i++<11)
	{
		printf("\n%d",number++);
	}
	printf("Program exit!");
	return 0;
	
}
