#ifndef IFDSTREAMBUF_H
#define IFDSTREAMBUF_H
#include <iostream>
#include <streambuf>

enum Mode
{
    KEEP_FD,
    CLOSE_FD
};

class IFdStreambuf: public std::streambuf
{
    private:
		int d_FD;
		Mode d_mode;
        char buffer[100];

    public:
        explicit IFdStreambuf(Mode mode = KEEP_FD);
        explicit IFdStreambuf(int FD, Mode mode = KEEP_FD);
        ~IFdStreambuf();
        void close(int FD);
        void open(int FD, Mode mode = KEEP_FD);
        std::streamsize xsgetn(char* s, std::streamsize n) override;
};

#endif
