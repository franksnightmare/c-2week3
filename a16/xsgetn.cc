#include "ifdstreambuf.ih"

size_t IFdStreambuf::xsgetn(char* s, size_t n)
{
    memcpy(buffer, s, 100);
    read(FD, buffer, 100);
}
