#include "Myutils.h"
int factorial(int m)
{
  if (m == 0) 
    return 1;
  else
    return (m*factorial(m-1));
}

int isPrime(int b)
{
   int c;
 
   for ( c = 2 ; c <= b - 1 ; c++ )
   { 
      if ( b%c == 0 )
     return 0;
   }
   return 1;
}
 

int ispalindrome(int n){
    int r,sum=0,temp;
    temp=n;
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)    
       return 1; 
    else     
       return 0;  

}
int vsum(int a, ...) 
{
    // define type of variable
    va_list L;
    int z;

    z = 0;

    va_start(L, a);

    // Loop to adding the int values
    for (int i=0; i < a; i++)
    {
        z = z + va_arg(L, int);
    }

    va_end(L);

    return z;
}

