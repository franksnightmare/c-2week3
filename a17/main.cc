#include "ofdstreambuf.ih"

int main(int argc, char *argv[])
{
    int FD = 1;
    OFdStreambuf ofdStreambuf(FD);
    char test[5] {'a', 'b', 'c', '\n', 0};
    ofdStreambuf.xsputn(test, 5);
}
