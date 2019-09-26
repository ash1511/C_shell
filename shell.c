#include"header.h"

char hist[25][10000],tmp[10000];
int size,size1,histsize,jobsize=0;
struct node jobs[10000];

int main(int argc,char* argv[])
{
	char *user=getusername();
	char hostname[10000];
	gethname(hostname);
	char home[10000],path[10000],path2[10000];
	char* inp[100];
	char* inp1[100];
	gethome(argv[0],home);
	printf("\e[1;1H\e[2J");
	inithistory(home);
	// signal(SIGTSTP,handler2);
	while(1)
	{
		resetinp(inp1);
		getcwdstr(path);
		makerel(path,home,path2);
		printterm(user,hostname,path2);
		takeinp(inp1);
		signal(SIGINT,handler1);
		for(int i=0;i<size;i++)
		{
			strcpy(tmp,inp1[i]);
			int tt=isup(tmp);
			if(tt)
			{
				printf("%d\n",tt);
				uparrowk(tt);
				continue;
			}
			makeinp(inp1[i],inp);
			tt=itspipe(inp);
			if(tt<0)
			{
				printf("Invalid Command\n");
				continue;
			}
			if(tt>0)
			{
				piping(tmp,path,path2,home);
				continue;
			}
			executecommand(inp,path,path2,home);
		}
	}
	return 0;
}