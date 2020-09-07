#include <stdio.h>
int main(void)
{
	const int i = 46;
	const int Next_i=20;
	int ounces,cost;
	
	printf("ounces cost.\n"); 
	for (ounces=1,cost=i;ounces<=16;ounces++,cost+=Next_i)
		printf("%5d $%4.2f\n",ounces,cost/100.0);
		
	return 0;
 } 
