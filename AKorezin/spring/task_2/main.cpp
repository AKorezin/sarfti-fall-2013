#include "queue.h"
#include <iostream>
int main(int argc,char** argv)
{
	Myqueue<int> queue;
	for(int i=0;i<510;i++)
	{
		queue.push(i);
	}
	int a[500];
	queue.get500(a);
	for(int i=0;i<500;i++)
	{
		std::cout<<a[i]<<" ";
	}
	std::cout<<std::endl;
	
	
	while(!queue.empty())
	{
		std::cout<<queue.front()<<" ";
		queue.pop();
	}
	std::cout<<std::endl;
	return 0;
}
