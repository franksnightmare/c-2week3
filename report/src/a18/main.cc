#include "main.h"
#include <string>

int main(int argc, char **argv)
{
	IFdStream in(0);
	OFdStream out(1);
	
	std::string variable;
	in >> variable;
	out << variable << '\n' << std::flush;
}
