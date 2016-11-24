#include <iostream>
#include <string>
#include "ifdstreambuf.h"
#include "ofdstreambuf.h"

class IFdStream: public std::istream
{
	public:
		explicit IFdStream(int FD);
		~IFdStream();
};

IFdStream::IFdStream(int FD)
:
	std::istream(new IFdStreambuf(FD))
{
}

IFdStream::~IFdStream()
{
	delete this->rdbuf();
}
	
class OFdStream: public std::ostream
{
	public:
		explicit OFdStream(int FD);
		~OFdStream();
};

OFdStream::OFdStream(int FD)
:
	std::ostream(new OFdStreambuf(FD))
{
}

OFdStream::~OFdStream()
{
	delete this->rdbuf();
}

int main(int argc, char **argv)
{
	IFdStream in(0);
	OFdStream out(1);
	
	std::string variable = "fslkjfsdf\n";
	in >> variable;
	out << variable << std::endl;
	
	//std::cout << variable << std::endl;
}
