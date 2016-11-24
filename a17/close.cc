#include "ofdstreambuf.ih"

void OFdStreambuf::close(int FD)
{
    ::close(FD);
    // code for setting mode to CLOSE_FD here
}
