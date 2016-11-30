#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(FDBufferMode mode)
:
	d_mode(mode)
{
	setg(d_buffer, d_buffer + d_bufferSize, d_buffer + d_bufferSize);	
}
