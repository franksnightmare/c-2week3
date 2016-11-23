#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(int FD, Mode mode = KEEP_FD)
:
	d_FD(FD),
	d_mode(mode)
{
}
