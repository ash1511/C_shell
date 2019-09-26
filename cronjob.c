#include "header.h"

void cronjob(char **c)
{
	if(size1<7)
	{
		printf("Invalid Command\n");
		return ;
	}
	int arr[3];
	arr[0]=arr[1]=arr[2]=-1;
	for(int i=0;i<size1;i++)
	{
		if(strcmp(c[i],"-c")==0)
		{
			arr[0]=i;
		}
		if(strcmp(c[i],"-t")==0)
		{
			arr[1]=i;
		}
		if(strcmp(c[i],"-p")==0)
		{
			arr[2]=i;
		}
	}
	if(arr[0]==-1 || arr[1]==-1 || arr[2]==-1)
	{
		printf("Invalid Command\n");
		return ;
	}
	if(!(arr[0]==1 && arr[1]-arr[0]>0 && arr[2]-arr[1]==1 && arr[2]==size1-2))
	{
		printf("Invalid Command\n");
		return ;
	}
	// To be done
}