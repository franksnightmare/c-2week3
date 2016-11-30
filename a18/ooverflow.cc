#include "ofdstreambuf.ih"

int OFdStreambuf::overflow(int character)
{
    sync();
	xsputn(&character, 1);
	return character;
}
