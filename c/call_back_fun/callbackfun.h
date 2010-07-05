#ifndef _call_back_fun_h_
#define _call_back_fun_h__
#include <stdio.h>
typedef void (*callback_t)();
extern void rtt(callback_t, int i);

void (* p_fun)();
void myprintf_info(void);
void myprintf_info_repfer(int num);
void call_back_fun(void (* p_fun)(void));
void call_fun(void (* p_fun)(), int num);
#endif
