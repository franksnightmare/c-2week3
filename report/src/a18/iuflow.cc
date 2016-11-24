#include "ifdstreambuf.ih"

int IFdStreambuf::uflow()
{
	char output[1] = {0};
	if (place < bufferSize)
	{
		*output = *(buffer + place);
		++place;
	}
	else
	{
		read(d_FD, output, 1 * sizeof(char));
	}
    return *output;
}
