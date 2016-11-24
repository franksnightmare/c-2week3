#include "main.h"

IFdStream::~IFdStream()
{
	delete this->rdbuf();
}
