#include "ofdstreambuf.ih"

OFdStreambuf::OFdStreambuf(FDBufferMode mode)
:
	d_mode(mode)
{
	setp(d_buffer, d_buffer + d_bufferSize, d_buffer + d_bufferSize);
}
