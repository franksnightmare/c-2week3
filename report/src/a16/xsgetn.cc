#include "ifdstreambuf.ih"

std::streamsize IFdStreambuf::xsgetn(char* s,
	std::streamsize n)
{
	int size = bufferSize;
	if (n <= size)
		memcpy(s, buffer, n * sizeof(char));
	else
	{
		memcpy(s, buffer, bufferSize * sizeof(char));
		read(d_FD, s + bufferSize,
			(n - bufferSize) * sizeof(char));
	}
	return n;
}
