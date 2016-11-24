#include "main.h"

OFdStream::OFdStream(int FD)
:
	std::ostream(new OFdStreambuf(FD))
{
}
