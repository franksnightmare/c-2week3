#include "main.ih"

BiStream::~BiStream()
{
	delete this->rdbuf();
}

