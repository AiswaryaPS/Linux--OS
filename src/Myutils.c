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
   int a;
 
   for ( a = 2 ; a <= c - 1 ; c++ )
   { 
      if ( c%c == 0 )
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
