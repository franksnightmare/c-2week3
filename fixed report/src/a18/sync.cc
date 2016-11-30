#include "ofdstreambuf.ih"

int OFdStreambuf::sync()
{
	size_t remaining = epptr() - pptr();
	if (!write(d_FD, d_buffer,
		remaining * sizeof(char)))
		
		return -1;
	
	setp(pbase(), epptr());

	return 0;
}
