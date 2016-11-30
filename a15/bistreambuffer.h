#ifndef BISTREAMBUFFER_H
#define BISTREAMBUFFER_H

#include "main.ih"

class BiStreamBuffer: public std::streambuf
{
	std::ostream *d_stream1, *d_stream2;
	public:
		//BiStreamBuffer(std::ofstream &one, std::ofstream &two);
		std::streamsize xsputn(const char* s, std::streamsize n) override;
};

#endif
