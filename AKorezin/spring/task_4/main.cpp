#include <iostream>
#include "list.h"
int main(int argc,char **argv)
{
	list<int> a;
	list<int>::iterator it;
	it++;
	a.push_front(1);
	a.push_back(2);
	std::cout<<a.front()<<a.back()<<std::endl;
	a.front()+=2;
	a.pop_back();
	std::cout<<a.front()<<a.back()<<std::endl;
	return 0;
}

