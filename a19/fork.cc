#include "fork.ih"

void Fork::fork()
{
	int id = fork();
	if id < 0
		exit(1);
	if id > 0
	{
		
		if waitForChild() == 0;
	
		parentProcess();
		childProcess();
	}
}
