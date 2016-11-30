#include "ifdstreambuf.ih"

int IFdStreambuf::underflow()
{
	if (place < bufferSize)
	{
		return *(buffer + place);
	}
	return EOF;
}
