#ifndef OFDSTREAMBUF_H
#define OFDSTREAMBUF_H

#include "mode.h"
#include <streambuf>

class OFdStreambuf: public std::streambuf
{
	int d_FD;
	Mode d_mode;
	size_t bufferSize = 200;
	char buffer[200];
	size_t place = 0;
	
	private:
		int sync() override;
	
	protected:
		int pSync();
	
    public:
        explicit OFdStreambuf(Mode mode = KEEP_FD);
        explicit OFdStreambuf(int FD, Mode mode = KEEP_FD);
        ~OFdStreambuf();
        void close(int FD);
        void open(int FD, Mode mode = KEEP_FD);
        std::streamsize xsputn(char const *s, std::streamsize n) override;
};

#endif
