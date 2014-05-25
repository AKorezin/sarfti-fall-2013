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
		T& getdata()
		{
			return data;
		};
		node<T>* getprev()
		{
			return prev;
		}
		node<T>* getnext()
		{
			return next;
		}
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
			first=NULL;
			last=NULL;
		};
		T& front()
		{
			return first->getdata();
		};
		T& back()
		{
			return last->getdata();
		};
		void push_front(T a)
		{
			node<T>* newnode=new node<T>;
			newnode->setdata(a);
			newnode->setnext(first);
			first=newnode;
			if(last==NULL)
				last=first;
		};
		void pop_front()
		{
			if(first!=NULL)
			{
				node<T>* delnode=first;
				first=first->getnext();
				if(first==NULL)
					last=NULL;
				delete delnode;
			}
		};
		void push_back(T a)
		{
			node<T>* newnode=new node<T>;
			newnode->setdata(a);
			newnode->setprev(last);
			last=newnode;
			if(first==NULL)
				first=last;
		};
		void pop_back()
		{
			if(last!=NULL)
			{
				node<T>* delnode=last;
				last=last->getprev();
				if(last==NULL)
					first=NULL;
				delete delnode;
			}
		};
		
	private:
		node<T>* first;
		node<T>* last;

};

template <class T>
class iterator {
	public:
		iterator(){};
};
#endif
