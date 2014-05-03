#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
void qsort(std::vector<int>::iterator,std::vector<int>::iterator);
int main(int argc,char **argv)
{
	srand(time(NULL));
	int i,n=10;
	std::vector <int> a;
	std::vector<int>::iterator it;
	if(argc==2)
		n=atoi(argv[1]);
	if(n==0)
		return 1;
	for(i=0;i<n;i++)
		a.push_back(rand()%50);
	for(it=a.begin();it!=a.end();it++)
	{
		std::cout<<*it<<" ";
	}
	std::cout<<std::endl;
	qsort(a.begin(),a.end()-1);
	for(it=a.begin();it!=a.end();it++)
	{
		std::cout<<*it<<" ";
	}
	std::cout<<std::endl;
	return 0;
}

void qsort(std::vector<int>::iterator itb,std::vector<int>::iterator itf)
{
	std::vector<int>::iterator it1,it2;
	it1=itb;
	it2=itf-1;
	std::vector<int>::iterator itc;
	int x=*itf;
	do
	{
		for(;*it1<x && it1<itf;it1++);
		for(;*it2>x;it2--);
		if (it1<it2)
		{
			*it1+=*it2;
			*it2=*it1-*it2;
			*it1-=*it2;
			it1++;
			it2--;
		}
	}
	while(it1<it2);
	if(itf!=it1 && *itf<*it1)
	{
		*itf+=*it1;
		*it1=*itf-*it1;
		*itf-=*it1;
	}
	if (it1+1<itf)
		qsort(it1+1,itf);
	if (itb<it2)
		qsort(itb,it2);
}
