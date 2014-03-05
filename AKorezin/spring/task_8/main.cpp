#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
std::vector<int> qsort(std::vector<int>);
//void qsort(std::vector<int>,std::vector<int>::iterator);
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
	a=qsort(a);
	for(it=a.begin();it!=a.end();it++)
	{
		std::cout<<*it<<" ";
	}
	std::cout<<std::endl;
}

std::vector<int> qsort(std::vector<int>a)
{
	std::vector<int>::iterator it,it1,it2;
	it=a.end()-1;

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
	return a;
}


/*void qsort(std::vector<int> a, std::vector<int>::iterator it)
{

}*/
