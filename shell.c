#include"header.h"

char jobs[1000][1000];
int jobsize=0,size,size1;

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
	while(1)
	{
		resetinp(inp1);
		getcwdstr(path);
		makerel(path,home,path2);
		printterm(user,hostname,path2);
		takeinp(inp1);
		for(int i=0;i<size;i++)
		{
			resetinp(inp);
			makeinp(inp1[i],inp);
			executecommand(inp,path,path2,home);
		}
	}
	return 0;
}