#ifndef MUTEX_H
#define	MUTEX_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void lock(pthread_mutex_t the_mutex, pthread_cond_t cond);
void unlock(pthread_mutex_t the_mutex);
void wait(pthread_cond_t cond);
void wakeup(pthread_cond_t cond);

#ifdef	__cplusplus
}
#endif

#endif	/* MUTEX_H */
