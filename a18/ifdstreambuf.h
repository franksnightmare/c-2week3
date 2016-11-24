#ifndef IFDSTREAMBUF_H
#define IFDSTREAMBUF_H
#include "mode.h"
#include <iostream>
#include <streambuf>

class IFdStreambuf: public std::streambuf
{
	int d_FD;
	Mode d_mode;
	std::size_t bufferSize = 100;
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
