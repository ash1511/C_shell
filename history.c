#include"header.h"

void addtohistory(char *c)
{
	if(histsize==20)
	{
		for(int i=0;i<19;i++)
		{
			strcpy(hist[i],hist[i+1]);
		}
		histsize--;
	}
	strcpy(hist[histsize++],c);
}

void historyexe(char **c)
{
	int num;
	if(strcmp(c[1],"")==0)
	{
		num=10;
	}
	else
	{
		num=atoi(c[1]);
	}
	for(int i=(0>histsize-num? 0:histsize-num);i<histsize;i++)
	{
		printf("%d %s\n",i+1,hist[i]);
	}
}