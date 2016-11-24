#ifndef IFDSTREAMBUF_H
#define IFDSTREAMBUF_H

enum Mode
{
    KEEP_FD,
    CLOSE_FD
};

explicit class IFdStreambuf: public streambuf
{
    private:
		Mode d_mode = KEEP_FD;
        char buffer[100];
        int d_FD;

    public:
        IFdStreambuf(Mode mode = KEEP_FD);
        IFdStreambuf(int FD, Mode mode = KEEP_FD);
        ~IFdStreambuf();
        void close(int FD);
        void open(int FD, Mode mode = KEEP_FD);
        std::streamsize xsgetn(char* s, std::streamsize n) override;
};

#endif
