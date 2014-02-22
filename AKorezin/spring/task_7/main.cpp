#include <iostream>
#include <ctime>
#include <cstdlib>
int main(int argc,char **argv)
{
	srand(time(NULL));
	int i,n=10;
	int a[n];
	for(i=0;i<n;i++)
		a[i]=rand()%20;
	
	for(i=0;i<n;i++)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;

	

	for(i=0;i<n;i++)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;
}
