#include"header.h"

void handler1(int sig_num)
{
	if(currjob!=-1)
	{
		printf("Process %s with pid = %d stopped by signal\n",currjobname,currjob);
		currjob=-1;
	}
}

void handler2(int sig_num)
{
	if(currjob!=-1)
	{
		printf("Process %s with pid %d sent to background\n",currjobname,currjob);
		jobs[jobsize].pid=currjob;
		jobs[jobsize].jobid=jobsize+1;
		jobs[jobsize].status=1;
		strcpy(jobs[jobsize].com,currjobname);
		jobsize++;
		currjob=-1;
	}
}