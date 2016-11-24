#include "ofdstreambuf.ih"

OFdStreambuf::~OFdStreambuf()
{
    if (d_mode == CLOSE_FD)
		close(d_FD);
}
