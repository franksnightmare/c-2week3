#include "ifdstreambuf.ih"

int IFdStreambuf::close(int FD)
{
    return ::close(FD);
}
