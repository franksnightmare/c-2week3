#include "ofdstreambuf.ih"

std::streamsize OFdStreambuf::xsputn(char const *s, std::streamsize n)
{
	int bound = bufferSize - place;
	if (n <= bound)
	{
		memcpy(buffer + place, s, n);
		place += n;
		return n;
	}
	else
		sync();
	
	size_t remaining = n;
	while (remaining > bufferSize)
	{
		write(d_FD, s, bufferSize * sizeof(char));
		s += bufferSize;
		remaining -= bufferSize;
	}
	memcpy(buffer, s, remaining * sizeof(char));
	place = remaining;
	return n;
}
