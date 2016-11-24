#include "ifdstreambuf.ih"

int main(int argc, char *argv[])
{
    //int FD = open(argv[1]);
    int FD = 0;
    IFdStreambuf ifdStreambuf(FD);
    char test[20] {0};
    ifdStreambuf.xsgetn(test, 20);
    cout << test << '\n';
}
