#ifndef QUEUE_H
#define QUEUE_H
#include <queue>

template <class T>
class Myqueue : public std::queue<T>
{
	public:
	Myqueue(void){};
	void get500(T*);
};

template<typename T>
void Myqueue<T>::get500(T *array)
{
	for(int i=0;i<500 && !this->empty();i++)
	{
		array[i]=this->front();
		this->pop();
	}
}
#endif // QUEUE_H