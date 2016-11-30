#include "fork.ih"

void Tester::childProcess()
{
	std::cout << "Child process " << getpid()
		<< " here!\nBOOP\n";
}
