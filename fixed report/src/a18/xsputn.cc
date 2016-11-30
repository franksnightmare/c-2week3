#include "ofdstreambuf.ih"

streamsize OFdStreambuf::xsputn(char const *buffer, streamsize size)
{
	int remaining = epptr() - pptr();
	if (size <= remaining)
	{
		memcpy(pptr(), buffer, size * sizeof(char));
		pbump(size);

		if (size == remaining)
			sync();

		return size;
	}
	sync();

	if (!write(d_FD, buffer, size))
		return 0;

	return size;	
}
