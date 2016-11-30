#include "main.ih"

BiStream::BiStream(std::ofstream &one, std::ofstream &two)
:
	BiStreamBuffer(one, two),
	std::ostream(this)
{
	//this->rdbuf(new BiStreamBuffer(one, two));
	//psbuf.funct(std::ofstream &one, std::ofstream &two);
}
