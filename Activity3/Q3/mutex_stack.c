#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
<<<<<<< HEAD:Assignment3/mutex_stack.c
#include <stdio.h>
#define MaxItems 5 
#define BufferSize 5 
=======
#include <stdio.h> 
#define MaxItems 5 
#define BufferSize 5 

>>>>>>> d6113b7510ab59b9872b6084d2a3a91ab3e1a92f:Assignment3/mutex_circular.c
int in = 0;
int out = 0;
int buffer[BufferSize];
pthread_mutex_t mutex;

void *producer(void *pno)
{   
    int item;
    for(int i = 0; i < MaxItems; i++) {
        item = rand();
        // Produce a random item
        pthread_mutex_lock(&mutex);
        /* wait for space in buffer */
        while (((in + 1) % BufferSize) == out)
        {
        /* put value to the buffer */
           buffer[in] = item;
           printf("producer %d: insert item %d at %d\n", *((int *)pno),buffer[in],in);
           in = (in + 1) % BufferSize;     
        }
        pthread_mutex_unlock(&mutex);
    }
}
void *consumer(void *cno)
{   
    int item=0;
    for(int i = 0; i < MaxItems; i++) {
        pthread_mutex_lock(&mutex);
        /* wait for buffer to fill */
        while (in == out) 
        {
        /* take one unit of data from the buffer */
           item = buffer[out];
           printf("Consumer %d: Remove Item %d from %d\n",*((int *)cno),item, out); 
           out = (out + 1) % BufferSize;     
        }
        pthread_mutex_unlock(&mutex);
    }
}

int main()
{   

    pthread_t pro[5],con[5];
    
    pthread_mutex_init(&mutex, NULL);

    int a[5] = {1,2,3,4,5};
    //Just used for numbering the producer and consumer

    for(int i = 0; i < 5; i++) {
        pthread_create(&pro[i], NULL, (void *)producer, (void *)&a[i]);
    }
    for(int i = 0; i < 5; i++) {
        pthread_create(&con[i], NULL, (void *)consumer, (void *)&a[i]);
    }

    for(int i = 0; i < 5; i++) {
        pthread_join(pro[i], NULL);
    }
    for(int i = 0; i < 5; i++) {
        pthread_join(con[i], NULL);
    }

    pthread_mutex_destroy(&mutex);
    
    return 0;
}
