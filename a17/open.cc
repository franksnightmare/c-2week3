#include "ofdstreambuf.ih"

void OFdStreambuf::open(int FD, Mode mode)
{
    d_FD = FD;
    d_mode = mode;
    //read(FD, buffer, 100);
}
