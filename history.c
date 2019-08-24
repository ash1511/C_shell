#include"header.h"

char historypath[10000];

void inithistory(char *hom)
{
	char buf[10000];
	strcpy(historypath,hom);
	strcat(historypath,"/history");
	FILE *fd=fopen(historypath,"r");
	if(fd==NULL || fseek(fd,0,SEEK_END)==0)
	{
		fd=fopen(historypath,"w");
		fprintf(fd,"0\n");
	}
	fseek(fd,0,SEEK_SET);
	fscanf(fd,"%d",&histsize);
	fclose(fd);
}

void addtohistory(char *c)
{
	return ;
	FILE *fd=fopen(historypath,"r");
	if(fd==NULL)
	{
		perror(historypath);
		exit(0);
	}
	char waste,buf[10000];
	fseek(fd,0,SEEK_SET);
	for(int i=0;i<=histsize;i++)
	{
		fscanf(fd,"%[^\n]s",buf);
		fscanf(fd,"%c",&waste);
		printf("%s\n",buf);
		if(i!=0)
		{
			strcpy(hist[i-1],buf);
		}
	}
	fclose(fd);
	if(histsize==20)
	{
		for(int i=0;i<19;i++)
		{
			strcpy(hist[i],hist[i+1]);
		}
		histsize--;
	}
	strcpy(hist[histsize++],c);
	fd=fopen(historypath,"w");
	if(fd==NULL)
	{
		perror(historypath);
		exit(0);
	}
	fseek(fd,0,SEEK_SET);
	fprintf(fd,"%d\n",histsize);
	for(int i=0;i<histsize;i++)
	{
		fprintf(fd,"%s\n",hist[i]);
	}
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