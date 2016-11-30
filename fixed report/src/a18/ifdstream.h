#ifndef IFDSTREAM_H
#define IFDSTREAM_H

#include <iostream>
#include "ifdstreambuf.h"

class IFdStream: public std::istream
{
	public:
		explicit IFdStream(int FD);
		~IFdStream();
};

#endif
