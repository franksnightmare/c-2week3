#include "fork.ih"

pid_t Fork::pid()
{
	if d_pid == getpid()
		return 0;
	else
		return d_pid;
}
