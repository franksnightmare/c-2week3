#include "ifdstreambuf.ih"

void IFdStreambuf::open(int FD, Mode mode = KEEP_FD)
{
    d_FD = FD;
    read(d_FD, buffer, 100);
    xsgetn(buffer, 100);

    if (mode != KEEP_FD)
    {
        d_FD = 0;
    }
}
