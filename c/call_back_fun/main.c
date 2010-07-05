#include <stdio.h>
#include "callbackfun.h"

int main(void)
{
	int num = 10;
	p_fun = myprintf_info;
	call_back_fun(p_fun);
	p_fun = myprintf_info_repfer;
	call_fun(p_fun, num);
	rtt(myprintf_info_repfer, num);

	return 0;
}
void call_back_fun(void (* p_fun)(void))
{
	printf("-----------------\n");
	p_fun();
	printf("-----------------\n");
}

void call_fun(void(* p_fun)(), int num)
{
	printf("\n-----------------\n");
	p_fun(num);
	printf("-----------------\n");

}

void rtt(callback_t fun, int num)
{
	printf("\n-----------------\n");
	fun(num);
	printf("-----------------\n");

}
