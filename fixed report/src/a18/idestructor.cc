#include "ifdstreambuf.ih"

IFdStreambuf::~IFdStreambuf()
{
	delete[] d_buffer;
    if (d_mode == CLOSE_FD)
		close(d_FD);
}
