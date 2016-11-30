#ifndef BISTREAM_H
#define BISTREAM_H

#include "bistreambuffer.h"

class BiStream: public BiStreamBuffer, public std::ostream
{
	public:
		BiStream(std::ofstream &one, std::ofstream &two);
		~BiStream();
};

#endif
