#include "ofdstreambuf.ih"

OFdStreambuf::OFdStreambuf(int FD, FDBufferMode mode)
:
	d_FD(FD),
	d_mode(mode)
{
	setp(d_buffer, d_buffer + d_bufferSize, d_buffer + d_bufferSize);
}
