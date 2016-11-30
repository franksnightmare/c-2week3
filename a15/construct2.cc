#include "main.ih"

BiStream::BiStream(std::ofstream &one, std::ofstream &two)
//:std::ostream(new BiStreamBuffer(one, two))
{
	this->rdbuf(new BiStreamBuffer(one, two));
	//psbuf.funct(std::ofstream &one, std::ofstream &two);
}
