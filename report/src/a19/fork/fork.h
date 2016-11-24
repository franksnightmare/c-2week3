#ifndef FORK_H_
#define FORK_H_

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

class Fork
{
	pid_t d_pid = 0;
	
	public:
		void fork();
	protected:
		pid_t pid();
		int waitForChild() const;
	private:
		virtual void parentProcess() = 0;
		virtual void childProcess() = 0;
};

class Tester: public Fork
{
	private:
		void parentProcess() override;
		void childProcess() override;
};

#endif
