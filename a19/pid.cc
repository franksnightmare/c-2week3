#include "fork.ih"

pid_t Fork::pid()
{
	return d_pid == 0 ? 0 : d_pid;
}
