#include <iostream>
#include <ctime>
#include <cstdlib>
int main(int argc,char **argv)
{
	srand(time(NULL));
	int i,n=10;
	if(argc==2)
		n=atoi(argv[1]);
	if(n==0)
		return 1;
	return 0;
}

