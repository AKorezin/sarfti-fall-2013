#ifndef TREE_H
#define TREE_H
#include <iostream>
template <class T> class tree;
#include "node.h"

template <class T>
class tree
{
	public:
		tree();                                            
		int insert_node(const T &);          
		node<T>* delete_node(node<T> *);    
		void inorder_walk(node<T>*);          
		node<T>* find_max(node<T>*);        
		node<T>* find_min(node<T>*);
		node<T>* find_node(node<T>*,const T &);
		node<T>* find_succsessor(const T &);    
		node<T> *get_root();                    
	private:
		node<T> *root;             
};

	template<class T>
tree<T>::tree()
{
	root=0;
}
	template<class T>
int tree<T>::insert_node(const T &x)
{
	node<T>* n=new node<T>(x);
	node<T>* ptr;
	node<T>* ptr1;

	n->parent=n->left=n->right=0;
	ptr=root;
	while(ptr!=0)               
	{
		ptr1=ptr;               
		if(x < ptr->get_data() )
			ptr=ptr->left;
		else
			ptr=ptr->right; 
	}
	n->parent=ptr1;
	if(ptr1==0)
		root=n;
	else
	{
		if(x < ptr1->get_data() )
			ptr1->left=n;
		else
			ptr1->right=n;
	}
	return 0;
}


	template<class T>
node<T>* tree<T>::delete_node(node<T> *z)
{
	node<T>* y;
	node<T>* x;
	if(z->left == 0 || z->right == 0)
		y=z;
	else
		y=find_succsessor(z->get_data());
	if(y->left!=0)
		x=y->left;
	else
		x=y->right;
	if(x!=0)
		x->parent=y->parent;
	if(y->parent == 0)
		root=x;
	else
	{
		if (y== (y->parent)->left)
			(y->parent)->left=x;
		else
			(y->parent)->right=x;
	}
	if(y!=z)
		z->data=y->get_data();
	return y;
}
	template<class T>
node<T>* tree<T>::find_max(node<T>* x)
{
	while(x->right!=0)
		x=x->right;
	return x;
}

	template<class T>
node<T>* tree<T>::find_min(node<T>* x)
{
	while(x->left!=0)
		x=x->left;
	return x;
}

	template<class T>
node<T>* tree<T>::find_succsessor(const T & val)
{
	node<T>* x=find_node(root,val);       
	node<T>* y;
	if(x == 0)
		return 0;
	if(x->right!=0)               
		return find_min(x->right);
	y=x->parent;
	while(y!=0 && x == y->right)
	{
		x=y;
		y=y->parent;
	}
	return y;
}
	template<class T>
node<T>* tree<T>::find_node(node<T>* n,
		const T & val)
{
	if(n==0 || val==n->get_data())
		return n;
	if(val > n->get_data() )
		return find_node(n->right,val);
	else
		return find_node(n->left,val);
}
	template<class T>
void tree<T>::inorder_walk(node<T>* n)
{
	if(n!=0)
	{
		inorder_walk(n->left);
		std::cout<<n->get_data()<<std::endl;
		inorder_walk(n->right);
	}
}

	template<class T>
node<T>* tree<T>::get_root()
{
	return root;
}
#endif //TREE_H
