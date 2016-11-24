#include "fork.ih"

void Tester::childProcess()
{
	std::cout << "Child process " << pid() << " here!\n";
	std::cout << "BOOP\n";
}
