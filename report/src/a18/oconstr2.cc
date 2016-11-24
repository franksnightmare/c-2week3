#include "ofdstreambuf.ih"

OFdStreambuf::OFdStreambuf(int FD, Mode mode)
:
	d_FD(FD),
	d_mode(mode)
{
}
