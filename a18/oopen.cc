#include "ofdstreambuf.ih"

void OFdStreambuf::open(int FD, FDBufferMode mode)
{
    d_FD = FD;
    d_mode = mode;
}
