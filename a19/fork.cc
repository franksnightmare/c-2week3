#include "fork.ih"

void Fork::fork()
{	
	pid_t pid = fork();
	if (pid == 0)
		childProcess();
	if (pid > 0)
	{
		d_pid = pid;
		parentProcess();
		waitForChild();
	}
	if (pid < 0)
		exit(1);
}
