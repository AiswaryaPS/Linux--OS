
#include <pthread.h> 
#include <stdio.h> 
#include <stdlib.h> 
#define max 16 
#define Th_max 4 
int a[max] = { 1, 4, 7, 9, 11, 14, 16, 18, 19, 
               22, 24, 25, 340, 60, 100, 200 }; 
  
// Array to store max of threads 
int max_num[Th_max] = { 0 }; 
int thread_no = 0; 
  
// Function to find maximum 
void maximum(void* arg) 
{ 
    int i, num = thread_no++; 
    int maxs = 0; 
  
    for (i = num * (max / 4); i < (num + 1) * (max / 4); i++) { 
        if (a[i] > maxs) 
            maxs = a[i]; 
    } 
  
    max_num[num] = maxs; 
}  
int main() 
{ 
    int maxs = 0; 
    int i; 
    pthread_t threads[Th_max]; 
  
    // creating 4 threads 
    for (i = 0; i < Th_max; i++) 
        pthread_create(&threads[i], NULL, 
                       maximum, (void*)NULL); 
  
    // joining 4 threads i.e. waiting for 
    // all 4 threads to complete 
    for (i = 0; i < Th_max; i++) 
        pthread_join(threads[i], NULL); 
  
    // Finding max element in an array 
    // by individual threads 
    for (i = 0; i < Th_max; i++) { 
        if (max_num[i] > maxs) 
            maxs = max_num[i]; 
    } 
  
    printf("Maximum Element is : %d", maxs); 
  
    return 0; 
} 
