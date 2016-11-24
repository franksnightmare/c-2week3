#include "ifdstreambuf.ih"

std::streamsize IFdStreambuf::xsgetn(char* s, std::streamsize n)
{
	if (n <= 100)
		memcpy(buffer, s, n);
	else
	{
		memcpy(buffer, s, 100);
		read(d_FD, s + 100, n - 100);
	}
	return n;
}
