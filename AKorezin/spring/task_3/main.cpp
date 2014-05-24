#include <iostream>
#include "f_list.h"
int main(int argc,char **argv)
{
	f_List<int> a;
	a.push_front(1);
	std::cout<<a.get_current_data()<<std::endl;
	a.insert_after_current(2);
	a.next();
	std::cout<<a.get_current_data()<<std::endl;
	a.gotobegin();
	a.insert_after_current(3);
	for(a.gotobegin();!a.isend();a.next())
		std::cout<<a.get_current_data()<<" ";
	std::cout<<std::endl;
	return 0;
}

