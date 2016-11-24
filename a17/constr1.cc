#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(Mode mode = KEEP_FD)
:
	d_mode(mode)
{
}
