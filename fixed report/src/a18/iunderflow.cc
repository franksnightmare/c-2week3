#include "ifdstreambuf.ih"

int IFdStreambuf::underflow()
{
	if (!read(d_FD, d_buffer,
		d_bufferSize * sizeof(char)))
		
		return EOF;
	
	return *eback();
}
