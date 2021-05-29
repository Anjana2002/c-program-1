//program to add the first seven terms of the following series using for loop.
//11!+ 22!+33!+ ...
#include<stdio.h>
int main()
{
  float i,fact=1,sum=0;
  for(i=1;i<=7;i++)
  {
    fact=fact*i;
    sum=sum+(i/fact);
  }
  printf("\nThe sum of first seven terms of 1/1!,2/2!,3/3!,... is %f\n\n",sum);
}
