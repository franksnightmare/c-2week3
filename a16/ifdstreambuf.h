#ifndef IFDSTREAMBUF_H
#define IFDSTREAMBUF_H

enum Mode
{
    KEEP_FD,
    CLOSE_FD
};

class IFdStreambuf: public streambuf
{
    private:
        char buffer[100];
        int d_FD;

    public:
        IFdStreambuf(Mode mode = KEEP_FD);
        IFdStreambuf(int FD, Mode mode = KEEP_FD);
        ~IFdStreambuf();
        close(int FD);
        open(int FD, Mode mode = KEEP_FD);
        size_t xsgetn override;
};

#endif
