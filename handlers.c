#include"header.h"

void sigintHandler(int sig_num)
{
	signal(SIGINT,sigintHandler);
	// fflush(stdout)l;
}

void sigtstpHandler(int sig_num) 
{ 
	signal(SIGTSTP,sigtstpHandler);
}