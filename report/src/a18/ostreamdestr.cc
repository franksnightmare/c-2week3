#include "main.h"

OFdStream::~OFdStream()
{
	delete this->rdbuf();
}
