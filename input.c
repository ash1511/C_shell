#include"header.h"

char inpifneeded[10000];

void takeinp(char** c)
{
	char inp[10000],waste;
	fgets(inp,10000,stdin);
	inp[strlen(inp)-1]='\0';
	strcpy(inpifneeded,inp);
	addtohistory(inpifneeded);
	char *tok=strtok(inp,";");
	int i=0;
	while(tok!=NULL)
	{
		c[i]=tok;
		i++;
		tok=strtok(NULL,";");
	}
	size=i;
}

void resetinp(char** inp)
{
	for(int i=0;i<100;i++)
	{
		inp[i]="";
	}
	size=0;
}

void makeinp(char *inp,char **c)
{
	strcpy(inpifneeded,inp);
	char *tok=strtok(inp," ");
	int i=0;
	while(tok!=NULL)
	{
		c[i]=tok;
		i++;
		tok=strtok(NULL," ");
	}
	size1=i;
}