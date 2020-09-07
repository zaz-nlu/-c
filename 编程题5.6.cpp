#include <stdio.h>

int main(int argc,int *argv[]) 
{
	int count=0,sum=0;
	printf("enter your number of work:");
	scanf("%d",&count);
	while(count>0)
	{
		sum=sum+count*count;
		count--;
	}
	printf("Your earned $ %d of money.\n",sum);
	printf("Program exit.");
	return 0;
}
