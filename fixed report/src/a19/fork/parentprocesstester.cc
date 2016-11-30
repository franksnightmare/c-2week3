#include "fork.ih"

void Tester::parentProcess()
{
	std::cout << "Parent process " << pid()
		<< " here!\nBEEP\n";
}
