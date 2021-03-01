#include "mystring.c"
#include "myutils.c"
#include "bitmask.c"
#include <stdio.h>
int main() {
  char s[]="Aiswarya";
  int prime=5,palindrome=151,fact=4,num=5,n=1;
  printf("length of the string is %lu\n ",mystrlen(s));
  if(isPrime(prime))
      printf(" Number is prime\n");
  if(ispalindrome(palindrome))
      printf("Number is palindrome\n");
  printf("factorial of %d is %d \n",fact,factorial(fact));
  printf("setting %d th of %d is %d \n",n,num,set(num,n));
  printf("setting %d th of %d is %d \n",n,num,clear(num,n));
  printf("setting %d th of %d is %d \n",n,num,flip(num,n));
return 0;
}
