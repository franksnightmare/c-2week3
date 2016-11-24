#include "ofdstreambuf.ih"

int OFdStreambuf::sync()
{
	write(d_FD, buffer, place * sizeof(char));
	place = 0;
	
	return 0;
}
