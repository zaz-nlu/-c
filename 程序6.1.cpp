#include <stdio.h>
int main (void)
{
	long num;
	long sum=0L;
	int status;
	
	printf("Please enter an intger to be summed:");
	printf("(Q to quit)");
	status = scanf("%ld",&num);
	while(status == 1)
	{
		sum = sum + num;
		printf("Please enter next integer (Q to quit):");
		status = scanf ("%ld",&num);
	}
	printf("Those integers sum to %ld.\n",sum);
	
	return 0;
 } 
