#include "mutex.h"

void lock(pthread_mutex_t the_mutex, pthread_cond_t cond){
	pthread_mutex_lock(&the_mutex);
}

void unlock(pthread_mutex_t the_mutex){
	pthread_mutex_unlock(&the_mutex);
}

void wait(pthread_cond_t cond){
	pthread_cond_wait(&cond, &the_mutex);
}

void wakeup(pthread_cond_t cond){
	pthread_cond_signal(&cond);
}