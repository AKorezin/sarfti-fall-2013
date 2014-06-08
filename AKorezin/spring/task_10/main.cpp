#include <iostream>
#include <ctime>
#include <cstdlib>
#include "tree.h"
int main(int argc,char** argv)
{
	tree<int> mytree;
	int n=10;
	srand (time(NULL));
	for(int i=0;i<n;i++)
	{
		int a=rand()%100;
		std::cout<<a<<" ";
		mytree.insert_node(a);
	}
	mytree.inorder_walk(mytree.get_root());
	std::cout<<"max "<<(mytree.find_max(mytree.get_root()))->get_data()<<std::endl;
	std::cout<<std::endl;
	return 0;
}

