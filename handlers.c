#include"header.h"

void handler1(int sig_num)
{
	signal(SIGINT,handler1);
}

void handler2(int sig_num)
{
	signal(SIGTSTP,handler2);
}