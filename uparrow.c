#include "header.h"

int isup(char *c)
{
	char tmp[50]="";
	for(int i=0;i<10;i++)
	{
		strcat(tmp,"^[[A");
		if(strcmp(tmp,c)==0)
		{
			return i+1;
		}
	}
	return 0;
}

void uparrowk(int k)
{
	
}