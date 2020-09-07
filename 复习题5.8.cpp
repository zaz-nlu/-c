#include <stdio.h>
#define TEN 10
int main(int argc,int *argv[])
{
    int n = 0;
    while(n++<10)
	{
		printf("%5d",n);
		printf("\n");
	}
	return 0;
}

