#ifndef IFDSTREAMBUF_H
#define IFDSTREAMBUF_H

#include "fdbuffermode.h"
#include <streambuf>

class IFdStreambuf: public std::streambuf
{
	int d_FD;
	FDBufferMode d_mode;
	std::size_t d_bufferSize = 100;
	char *d_buffer = new char[100];

	protected:
		explicit IFdStreambuf(
			FDBufferMode mode = KEEP_FD);
        explicit IFdStreambuf(int FD,
			FDBufferMode mode = KEEP_FD);
		int underflow() override;
		int uflow() override;
		std::streamsize xsgetn(char* buffer,
			std::streamsize size) override;

    public:
        ~IFdStreambuf();
        int close(int FD);
        void open(int FD,
			FDBufferMode mode = KEEP_FD);
};

#endif
