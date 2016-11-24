#include "main.ih"

std::streamsize BiStreamBuffer::xsputn(const char* s,
	std::streamsize n)
{
	*d_stream1 << s;
	*d_stream2 << s;
	return 0;
}



