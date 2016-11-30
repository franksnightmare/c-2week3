#ifndef BISTREAMBUFFER_H
#define BISTREAMBUFFER_H

#include <iostream>

class BiStreamBuffer: public std::streambuf
{
	std::ostream *d_stream1, *d_stream2;
	
	protected:
		BiStreamBuffer(std::ofstream &one, std::ofstream &two);
	
	public:
		std::streamsize xsputn(const char* s, std::streamsize n) override;
};

#endif
