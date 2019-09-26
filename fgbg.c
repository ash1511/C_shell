#include "header.h"

void execute_fg(char **c)
{
	if(size1!=2)
	{
		printf("Invalid input\n");
		return ;
	}
	int f=0,i;
	pid_t p=atoi(c[1]);
	for(i=0;i<jobsize;i++)
	{
		if(jobs[i].jobid==p)
		{
			f=1;
			jobs[i].status=0;
			break;
		}
	}
	if(f)
	{
		int status;
		p=jobs[i].pid;
		kill(p,SIGCONT);
		waitpid(p,&status,WUNTRACED);
	}
	else
	{
		printf("Process with jobid %d doesn't exist\n",p);
	}
}

void execute_bg(char **c)
{
	if(size1!=2)
	{
		printf("Invalid input\n");
		return ;
	}
	int f=0,i;
	pid_t p=atoi(c[1]);
	for(i=0;i<jobsize;i++)
	{
		if(jobs[i].jobid==p)
		{
			f=1;
			break;
		}
	}
	if(f)
	{
		int status;
		printf("Name = %s\nJobID = %d\nPid = %d\n",jobs[i].com,p,jobs[i].pid);
		kill(jobs[i].pid,SIGCONT);
	}
	else
	{
		printf("Process with jobid %d doesn't exist\n",p);
	}
}