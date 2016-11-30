#include "fork.ih"

void Tester::parentProcess()
{
	std::cout << "Parent process " << getpid()
		<< " here!\nBEEP\n";
}
