#include <iostream>
#include <string>

class IFdStream: public std::istream
{
	public:
		explicit IFdStream(int &FD);
};

IFdStream(int &FD)
:
	std::istream(new IFdStreambuf(int &FD))
{
}
	
class OFdStream: public std::ostream
{
	public:
		explicit OFdStream(int &FD);
};

OFdStream(ofstream &FD)
:
	std::ostream(new OFdStreambuf(int &FD))
{
}

int main()
{
	int FD0 = 0;
	int FD1 = 1;

	IFdStream in(FD0);
	OFdStream out(FD1);

	std::string variable;
	in >> variable;
	out << variable << std::endl;

	
}
