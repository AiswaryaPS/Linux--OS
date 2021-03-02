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
