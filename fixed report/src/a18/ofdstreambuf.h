#ifndef OFDSTREAMBUF_H
#define OFDSTREAMBUF_H

#include "fdbuffermode.h"
#include <streambuf>

class OFdStreambuf: public std::streambuf
{
	int d_FD;
	FDBufferMode d_mode;
	size_t d_bufferSize = 100;
	char *d_buffer = new char[100];

	private:
		int sync() override;

	protected:
		explicit OFdStreambuf(FDBufferMode mode = KEEP_FD);
        explicit OFdStreambuf(int FD, FDBufferMode mode = KEEP_FD);
		int pSync();

    public:
        ~OFdStreambuf();
        int close(int FD);
        void open(int FD, FDBufferMode mode = KEEP_FD);
        std::streamsize xsputn(char const *buffer, std::streamsize size) override;
        int overflow(int character = EOF) override;
};

#endif
