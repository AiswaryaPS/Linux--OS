#include "bitmask.h"
int set(int m, int n) 
{ 
    return (m | (1 << (n - 1))); 
} 
int clear(int m, int n) 
{ 
    return (m & (~(1 << (n - 1)))); 
} 
int flip(int m, int n) 
{ 
    return (m ^ (1 << (n - 1))); 
} 



