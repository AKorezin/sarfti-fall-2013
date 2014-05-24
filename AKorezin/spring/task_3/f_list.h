#ifndef f_list
#define f_list
template <class T>
class node {
	public:
		node()
		{
			next=NULL;
		};
		void setnext(node* a)
		{
			next=a;
		};
		void setdata(T a)
		{
			data=a;
		};
		T getdata()
		{
			return data;
		};
		node* getnext()
		{
			return next;
		};
	private:
		node* next;
		T data;
};
template <class T>
class f_List {
	public:
		f_List()
		{
			current=NULL;
			begin=NULL;
			end=NULL;
		};

		void push_front(T a)
		{
			node<T>* newnode=new node<T>;
			newnode->setnext(begin);
			newnode->setdata(a);
			begin=newnode;
			if(end==NULL)
			{
				end=begin;
				current=begin;
			}
		};

		void insert_after_current(T a)
		{
			node<T>* newnode=new node<T>;
			if(current==end)
				end=newnode;

			newnode->setnext(current->getnext());
			current->setnext(newnode);
			newnode->setdata(a);
		};

		void remove_after_current()
		{
			node<T>* nextnode=current->getnext();
			if (nextnode==end)
			{
				end=current;
				current->setnext(NULL);
			}
			else
				current->setnext(nextnode->getnext());
			delete nextnode;
		};

		T get_current_data()
		{
			return current->getdata();
		};

		void set_current_data(T data)
		{
			current->setdata(data);
		};

		void next()
		{
			current=current->getnext();
		};

		int isend()
		{
			if (current==NULL)
				return 1;
			else 
				return 0;
		};

		void gotobegin()
		{
			current=begin;
		};

		void gotoend()
		{
			current=end;
		}

	private:
		node<T>* current;
		node<T>* begin;
		node<T>* end;
};
#endif
