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
	int x;
	for(i=1;i<n;i++)
	{
		x=a[i];
		int j;
		for(j=i-1;j>=0 && x>a[j];j--)
			a[j+1]=a[j];
		a[j+1]=x;
	}
	

	for(i=0;i<n;i++)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;
}
