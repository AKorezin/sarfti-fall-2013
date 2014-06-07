#include <pthread.h>
#include <iostream>
#include <vector>
int counter;
static pthread_mutex_t mutex1 = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
void *function(void *)
{
	pthread_mutex_lock(&mutex1);
	for(int i=0;i<1000000;i++)
		counter++;
	pthread_mutex_unlock(&mutex1);
	pthread_exit(NULL);
}
void *function1(void *)
{
	for(int i=0;i<1000000;i++)
		counter++;
	pthread_exit(NULL);
}
int main(int argc,char** argv)
{
	int maxthreads=2;
	counter=0;
	pthread_t threads[maxthreads];
	std::cout<<"start"<<std::endl;
	for(int i=0; i<maxthreads;i++)
		pthread_create(&threads[i],NULL,function,NULL);
	for(int i=0; i<maxthreads;i++)
		pthread_join(threads[i],NULL);
	std::cout<<counter<<std::endl;
	counter=0;
	for(int i=0; i<maxthreads;i++)
		pthread_create(&threads[i],NULL,function1,NULL);
	for(int i=0; i<maxthreads;i++)
		pthread_join(threads[i],NULL);
	std::cout<<counter<<std::endl;
	return 0;
}

