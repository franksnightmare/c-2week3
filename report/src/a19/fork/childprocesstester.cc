#include "fork.ih"

void Tester::childProcess()
{
	std::cout << "Child process " << pid()
		<< " here!\nBOOP\n";
}
