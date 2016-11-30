#include "ofdstreambuf.ih"

OFdStreambuf::~OFdStreambuf()
{
	delete[] d_buffer;
    if (d_mode == CLOSE_FD)
		close(d_FD);
}
