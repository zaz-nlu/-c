#include <stdio.h>
#define FORMAT "%s! C is cool!\n"

int main(int agec,char *argc[])
{
	int num = 10;
	printf(FORMAT,FORMAT);
	printf("%d\n",++num);
	printf("%d\n",num++);
	printf("%d\n",num--);
	printf("%d\n",num);
	return 0; 
}
