#include "main.h"

IFdStream::IFdStream(int FD)
:
	std::istream(new IFdStreambuf(FD))
{
}
