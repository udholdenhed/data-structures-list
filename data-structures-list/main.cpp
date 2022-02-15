#include "list.h"

#include <iostream>
#include <list>

int main(int argc, char* argv[])
{
	ds::list<int> list;
	list.push_back(0);
	list.push_back(10);
	list.push_back(20);
	list.push_back(30);
	list.push_front(-10);

	return EXIT_FAILURE;
}