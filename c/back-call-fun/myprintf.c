#include "callbackfun.h"

void myprintf_info(void)
{
	printf("welcome to me!!!\n");
}


void myprintf_info_repfer(int num)
{
	int i;
	for(i = 0; i <= num; i++)
	printf("i =%2d  welcome to me!!!\n", i);
}
