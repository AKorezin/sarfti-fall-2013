#include <iostream>
#include <ctime>
#include <cstdlib>
#define N 10
void sort(int *, int);
int main(int argc,char **argv)
{
	srand(time(NULL));
	int i;
	int a[N];
	for(i=0;i<N;i++)
		a[i]=rand()%20;
	
	for(i=0;i<N;i++)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;

	sort(a,0);

	for(i=0;i<N;i++)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;
}

void sort(int * array, int pos)
{
	if (pos==N)
		return;
	int min = pos;
	for(int i=pos+1;i<N;i++)
		if (array[i]<array[min])
			min=i;
	std::swap(array[pos],array[min]);
	sort(array,pos+1);
}
