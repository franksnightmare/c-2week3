#include "ifdstreambuf.ih"

std::streamsize IFdStreambuf::xsgetn(char* buffer, std::streamsize size)
{
	size_t remaining = egptr() - gptr();
	if (size <= remaining)
	{
		memcpy(buffer, d_buffer, remaining * sizeof(char));
		read(d_FD, buffer + remaining, (size - remaining) * sizeof(char));
		read(d_FD, eback(), bufferSize * sizeof(char));
		setg(eback(), eback(), egptr());
	}
	else
	{
		memcpy(buffer, d_buffer, size * sizeof(char));
		set(eback(), gptr() + size, egptr());
	}
	return size;
}
