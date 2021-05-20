//print the armstrong numbers between 1-500
#include<stdio.h>
#include<math.h>
int main()
{
  int i=1,rem;
  printf("Armstrong numbers between 1 and 500:\n");
  for(i=1;i<=500;i++)
  {
    int n=i,n1=i,n2=i,l=0,sum=0;
    while(n>0)
    {
      n=n/10;
      l++;
    }
    while(n1>0)
    {
      rem=n1%10;
      sum=sum+pow(rem,l);
      n1=n1/10;
    }
    if(n2==sum)
    {
      printf("%d\n",n2);
    }
  }
}
