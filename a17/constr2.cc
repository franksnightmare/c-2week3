#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(int FD, Mode mode)
:
	d_FD(FD),
	d_mode(mode)
{
}
