#include "ifdstreambuf.ih"

void IFdStreambuf::close(int FD)
{
    ::close(FD);
    // code for setting mode to CLOSE_FD here
}
