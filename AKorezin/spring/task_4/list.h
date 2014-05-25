#ifndef LIST
#define LIST

template <class T>
class node {
	public:
		node()
		{
			next=NULL;
			prev=NULL;
		};
		void setnext(node* a)
		{
			next=a;
		};
		void setprev(node* a)
		{
			prev=a;
		};
		void setdata(T a)
		{
			data=a;
		};
		T getdata()
		{
			return data;
		};
	private:
		node* next;
		node* prev;
		T data;
};

template <class T> 
class list {
	public:
		list()
		{
		};

};
template <class T>
class iterator {
	public:
		iterator(){};
};
#endif
