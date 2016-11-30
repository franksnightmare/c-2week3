#include "ofdstreambuf.ih"

int OFdStreambuf::overflow(int character)
{
    sync();
    char castChar = character;
	xsputn(&castChar, 1);
	return character;
}
