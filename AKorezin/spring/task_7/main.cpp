#include <iostream>
#include <ctime>
#include <cstdlib>
int main(int argc,char **argv)
{
	void sort(int *,int);
	srand(time(NULL));
	int i,n=10;
	if (argc=2)
		n=atoi(argv[1]);
	int a[n];
	for(i=0;i<n;i++)
		a[i]=rand()%50;
	
	for(i=0;i<n;i++)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;
	sort(a,n);
	for(i=0;i<n;i++)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;
	return 0;
}

void sort(int * a,int n){
	int x;

	for(int i=1;i<n;i++)
	{
		x=a[i];
		int j;
		for(j=i-1;j>=0 && x<a[j];j--)
			a[j+1]=a[j];
		a[j+1]=x;
	}
	
}
