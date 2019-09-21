#include "header.h"

void kjob(char **c)
{
	if(size1!=3)
	{
		printf("Invalid input\n");
		return ;
	}
	kill(atoi(c[1]),atoi(c[2]));
}