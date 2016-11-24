#include "main.ih"

BiStreamBuffer::BiStreamBuffer(std::ofstream &one, std::ofstream &two)
:
	d_stream1(&one),
	d_stream2(&two)
{
}
