#include<iostream>
#include<bitset>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

using namespace std;
class details
{
	int empid;
	char name[50];
	float sal;
	public:
	details (int emp_id, char name, float salary)
	{
		empid=emp_id;
		name = name;
		sal=salary;
	}
	void display();
};

void details::display()
{
	cout<<"\n ----------------------";
	cout<<"\n employ id : "<<empid;
	cin>>empid;
	cout<<"\n Name : "<<name;
	cin>>name;
	cout<<"\n salary : "<<sal;
	cin>>sal;
}

int main ( int argc, char* argv[])
{
	int pid, fpid,i, ppid,N,status,exitstatus;
	fpid = fork ();
	pid = getpid();
	ppid = getppid();
	if (argc == 1)
		wait(0);
		cout<<"wait for the results"<<endl;
	{
		sleep(5);

		if(fork() == 0)
		{
			int emp_id;
			char name[50];
			float salary;
			cout<<"\n Enter Details: \n";
			cout<<"-----------------------";
			cout<<"\n employ id. ";
			cout<<"\n Name : ";
			cout<<"\n salary : ";
			cout<<"child has ended"<<endl;
			exit(3);

		}

		else
		{
			sleep(1);
			cout<<"parent starts"<<endl;
			details display();
	   		cout<<"parent has ended"<<endl;
		}
	}
	cout<<"parent ending"<<endl;
	cout<<"EXIT_SUCCESS"<<endl;
	return (0);
}
