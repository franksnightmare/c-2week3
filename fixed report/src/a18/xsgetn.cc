#include "ifdstreambuf.ih"

std::streamsize IFdStreambuf::xsgetn(char* buffer,
	std::streamsize size)
{
	size_t remaining = egptr() - gptr();
	if (size <= remaining)
	{
		memcpy(buffer, d_buffer,
			remaining * sizeof(char));
		read(d_FD, buffer + remaining,
			(size - remaining) * sizeof(char));
		read(d_FD, eback(), d_bufferSize * sizeof(char));
		setg(eback(), eback(), egptr());
	}
	else
	{
		memcpy(buffer, d_buffer, size * sizeof(char));
		gbump(size);
	}
	return size;
}
