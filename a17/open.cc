#include "ifdstreambuf.ih"

void IFdStreambuf::open(int FD, Mode mode = KEEP_FD)
{
    d_FD = FD;
    d_mode = mode;
    read(FD, buffer, 100);
}
