#include "ifdstreambuf.ih"

~IFdStreambuf::IFdStreambuf()
{
    if (mode == CLOSE_FD)
		close(d_FD);
}
