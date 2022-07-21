#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <wait.h>
#include <unistd.h>

using namespace std;

int g_value = 10;
int main()
{
	int pid;
	int l_value = 5;
	printf("writing a sample code\n");
	pid = fork();
	if( 0 == pid)
	{
		printf("For child local variable =%d\n and golbal variable value = %d\n", l_value, g_value);
		_exit(0);
	}
	else
	{
		printf("for parent Local variable value=%d\n and global variable value=%d\n",l_value,g_value);
			}
		printf("Code common for both parent process and child process\n");
		return 0;
}
