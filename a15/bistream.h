#ifndef BISTREAM_H
#define BISTREAM_H

#include "main.ih"
class BiStream: public std::ostream
{
	public:
		BiStream(std::ofstream &one, std::ofstream &two);
		~BiStream();
};

#endif
