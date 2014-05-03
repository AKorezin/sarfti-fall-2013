#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
void MergeSort(std::vector<int>&, size_t, size_t);
void MakeMerge(std::vector<int>&, size_t, size_t, size_t);
int main(int argc,char **argv)
{
	srand(time(NULL));
	
	int i,n=10;
	if(argc==2)
		n=atoi(argv[1]);
	if(n==0)
		return 1;
	std::vector <int> a;
	for(i=0;i<n;i++)
	{
		a.push_back(rand()%50);
		std::cout<<a[i]<<" ";
	}
	std::cout<<std::endl;
	MergeSort(a,0,a.size()-1);

	for(i=0;i<n;i++)
	{
		std::cout<<a[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}

void MergeSort(std::vector<int> &a, size_t l, size_t r)
{
	if (l>=r) return;

	size_t m=(l+r)/2;

	MergeSort(a,l,m);
	MergeSort(a,m+1,r);
	MakeMerge(a,l,r,m);
}

void MakeMerge(std::vector<int> &a, size_t l, size_t r, size_t m)
{
	if(l>=r || m<l || m>r) return;
	if(r==l+1 && a[l]>a[r])
	{
		int temp=a[l];
		a[l]=a[r];
		a[r]=temp;
		return;
	}
	std::vector<int> tmp(&a[l],&a[r+1]);

	for(size_t i=l,j=0,k=m-l+1;i<=r;i++)
	{
		if(j>m-l)
			a[i]=tmp[k++];
		else 
			if(k>r-l)
				a[i]=tmp[j++];
			else
				a[i]=(tmp[j]<tmp[k]) ? tmp[j++] : tmp[k++];
	}

}
