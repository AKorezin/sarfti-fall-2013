#ifndef NODE_H
#define NODE_H

template <class T> class node
{
	friend class tree<T>;
	public:
	node(const T &);
	T get_data();
	protected:
	node* left;          
	node* right;         
	node* parent;
	T data;
};

	template<class T>
node <T>::node(const T &a)
{
	data=a;
	left=right=0;
}
	template <class T>
T node <T>::get_data()
{
	return data;
}
#endif //NODE_H
