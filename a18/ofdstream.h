#ifndef OFDSTREAM_H
#define OFDSTREAM_H

#include <iostream>
#include "ofdstreambuf.h"

class OFdStream: public std::ostream
{
	public:
		explicit OFdStream(int FD);
		~OFdStream();
};

#endif
