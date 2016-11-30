#include "ofdstreambuf.ih"

int OFdStreambuf::close(int FD)
{
    return ::close(FD);    
}
