//find the value of one number raised to the power of the other.
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,i;
  float r=1;
  printf("\nEnter the two numbers: ");
  scanf("%d%d",&a,&b);
  for(i=1;i<=abs(b);i++)
  {
    r=r*a;
  }
  //for negative numbers
  if(b<0)
  {
    r=1/r;
  }
  printf("%d^%d= %f\n\n",a,b,r);
}
