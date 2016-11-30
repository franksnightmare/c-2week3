#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(int FD, FDBufferMode mode)
:
	d_FD(FD),
	d_mode(mode)
{
	setg(d_buffer, d_buffer + d_bufferSize,
		d_buffer + d_bufferSize);
}
