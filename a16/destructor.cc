#include "ifdstreambuf.ih"

IFdStreambuf::~IFdStreambuf()
{
    if (d_mode == CLOSE_FD)
		close(d_FD);
}
