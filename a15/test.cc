#include <iostream>
#include <fstream>//necesario para ofstream

class BiStreamBuffer: public std::streambuf
{
	std::ostream *d_stream1, *d_stream2;

	public:
		BiStreamBuffer(std::ofstream &one, std::ofstream &two);
		std::streamsize xsputn(const char* s, std::streamsize n) override;
};

BiStreamBuffer::BiStreamBuffer(std::ofstream &one, std::ofstream &two)
:
	d_stream1(&one),
	d_stream2(&two)
{
}

std::streamsize BiStreamBuffer::xsputn(const char* s, std::streamsize n)
{
	*d_stream1 << s;
	*d_stream2 << s;
	return 0;
}


class BiStream: public std::ostream
{
	public:
		BiStream(std::ofstream &one, std::ofstream &two);
		~BiStream();
};


BiStream::BiStream(std::ofstream &one, std::ofstream &two)
:
	std::ostream(new BiStreamBuffer(one, two))
{
}

BiStream::~BiStream()
{
	delete this->rdbuf();
}

int main()
{
	std::ofstream one("one");
    std::ofstream two("two");

    BiStream ms(one, two);

    ms << "Hello world" << std::endl << std::flush;
}
