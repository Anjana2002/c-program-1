//perfect numbers
#include<stdio.h>
void main()
{
  int n=1 ,i,sum,count;
  while(count<3)
  {
    i=1;
    sum=0;
    while(i<n)
    {
      if (n%i==0)
      {
        sum=sum+i;
      }
      i++;
    }
    if(sum==n)
    {
      printf("%d\n",n);
      count++;
    }
    n++;
  }
}
