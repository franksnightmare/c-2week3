#include "main.ih"

int main()
{
	std::ofstream one("one");
    std::ofstream two("two");

    BiStream ms(one, two);

    ms << "Hello world" << std::endl << std::flush;
}
