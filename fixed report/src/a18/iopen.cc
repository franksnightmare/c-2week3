#include "ifdstreambuf.ih"

void IFdStreambuf::open(int FD, FDBufferMode mode)
{
    d_FD = FD;
    d_mode = mode;
}
