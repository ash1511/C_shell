#include<stdio.h> 
#include<string.h> 
#include<unistd.h> 
#include<stdlib.h> 
#include<dirent.h>
#include<time.h>
#include<sys/stat.h> 
#include<sys/wait.h>
#include<pwd.h>
#include<grp.h>
#include<termios.h>
#include<sys/select.h>

extern int size,size1;
static int histsize=0;
static char hist[20][10000];

char *uid_to_name(uid_t uid);
char *gid_to_name(gid_t gid);
void addtohistory(char *c);
void historyexe(char **c);
void handler();
void getcwdstr(char *arr);
char *getusername();
void gethname(char *arr);
void printterm(char *usr,char *host,char *path);
int makerel(char *path,char *home,char *path2);
void printdir(char *c,int f);
void lsl(char *c,int f);
int pinfo(char **args,char *home);
void execothers(char **c,int bg);
int executecommand(char** c,char *path,char *path2,char *home);
void takeinp(char** c);
void resetinp(char** inp);
void makeinp(char *inp,char **c);
void gethome(char *from,char *to);
void echox(char **c);
int kbhit();
void nonblock(int state);
void dirty(char **c);
void finddirtysize();