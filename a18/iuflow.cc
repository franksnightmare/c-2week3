#include "ifdstreambuf.ih"

int IFdStreambuf::uflow()
{
	int UFlowChar = underflow();
	setg(eback(), eback(), egptr());
	return UFlowChar;
}
