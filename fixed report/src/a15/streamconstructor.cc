#include "main.ih"

BiStream::BiStream(std::ofstream &one,
	std::ofstream &two)
:
	std::ostream(new BiStreamBuffer(one, two))
{
}
