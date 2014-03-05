#include <iostream>
#include <ctime>
#include <cstdlib>
#include <list>
int main(int argc,char **argv)
{
	srand(time(NULL));
	int i,n=10;
	std::list <int> a;
	std::list<int>::iterator it;
	for(i=0;i<n;i++)
		a.push_front(rand()%20);
	for(it=a.begin();it!=a.end();it++)
	{
		std::cout<<*it<<" ";
	}
	std::cout<<std::endl;
	for(it=a.begin();it!=a.end();it++)
	{
		std::cout<<*it<<" ";
	}
	std::cout<<std::endl;
}
