#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
	int c, p, pid, status, exitstat;

	pid = fork();
	
	if(pid == 0)
	{
		cout<<"child starts"<<endl;
		for(c=1;c<500;c++)
			if(c%2 != 0)
				cout<<"c="<<c<<endl;
		cout<<"child ends"<<endl;
	}
	else 
	{
		cout<<"parent starts"<<endl;
		for(p=1;p<500;p++)
			if(p%2 == 0)
				cout<<"p="<<p<<endl;
	}

	wait(&status);
	if((status &c) != 499)
		cout<<"abnormal child termination"<<endl;
	else
	{
		cout<<"\n EXIT_SUCCESS"<<endl;
	}

	return 0;
}



