#ifndef dlist
#define dlist

/*template <class T>
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
};*/

template <class T> 
class dlist {
	public:
		dlist()
		{
/*			current=NULL;
			begin=NULL;
			end=NULL;*/
		};
/*
		T get_current_data()
		{
			return current->getdata();
		};

		void set_current_data(T data)
		{
			current->setdata(data);
		};

		int isend()
		{
			if (current==NULL)
				return 1;
			else 
				return 0;
		};

		void begin()
		{
			current=start;
		};

		void end()
		{
			current=finish;
		}

	private:
		node<T>* current;
		node<T>* start;
		node<T>* finish;*/
};
#endif
