#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
//std::vector<int> qsort(std::vector<int>);
void qsort(std::vector<int>::iterator,std::vector<int>::iterator);
int main(int argc,char **argv)
{
	srand(time(NULL));
	int i,n=10;
	std::vector <int> a;
	std::vector<int>::iterator it;
	for(i=0;i<n;i++)
		a.push_back(rand()%20);
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
}

void qsort(std::vector<int>::iterator itb,std::vector<int>::iterator itf)
{
	std::vector<int>::iterator it1,it2;
	it1=itb;
	it2=itf-1;
	std::vector<int>::iterator itc;
/*	for(itc=itb;itc<=itf;itc++)
	{
		std::cout<<*itc<<" ";
	}
	std::cout<<":1"<<std::endl;*/
//	std::cout<<*it1<<" "<<*it2<<std::endl;
	int x=*itf;
	do
	{
		for(;*it1<x && it1<itf;it1++);
		for(;*it2>x;it2--);
		if (it1<it2)
		{
//		std::cout<<*it1<<" "<<*it2<<std::endl;
			*it1+=*it2;
			*it2=*it1-*it2;
			*it1-=*it2;
			it1++;
			it2--;
		}
	}
	while(it1<it2);

	/*for(itc=itb;itc<=itf;itc++)
	{
		std::cout<<*itc<<" ";
	}
	std::cout<<":2 "<<*it1<<" "<<*itf<<std::endl;*/
	if(itf!=it1 && *itf<*it1)
	{
		*itf+=*it1;
		*it1=*itf-*it1;
		*itf-=*it1;
	}
/*	for(itc=itb;itc<=itf;itc++)
	{
		std::cout<<*itc<<" ";
	}
	std::cout<<":3"<<std::endl;*/
	if (it1+1<itf)
		qsort(it1+1,itf);
	if (itb<it2)
		qsort(itb,it2);
/*	it--;

	for(it1=a.begin(),it2=it-1;it1<=it2;)
	{
	std::cout<<*it1<<" "<<*it2<<std::endl;
		for(;*it1<=*it && it1<it;it1++);
		for(;*it2>*it;it2--);
		if (it1<=it2)
		{
			std::cout<<*it1<<" swap1 "<<*it2<<std::endl;
			*it1+=*it2;
			*it2=*it1-*it2;
			*it1-=*it2;
			it1++;
			it2--;
		}
	}
	std::cout<<*it1<<" "<<*it2<<std::endl;
	*it1+=*it;
	*it=*it1-*it;
	*it1-=*it;
//	if (a.begin()<it2)*/
//	return a;
}


/*void qsort(std::vector<int> a, std::vector<int>::iterator it)
{

}*/
