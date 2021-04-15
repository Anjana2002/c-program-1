//to find the sum of digits of 5 digit number
#include<stdio.h>
void main()
{
  int n,sum=0,n1,rem,count=0;
  printf("\n**************\n");
  printf("Enter the five digit number: ");
  scanf("%d",&n);
  n1=n;
  while(n>0)
  {
    n=n/10;
    count++;
  }
  if(count==5)
  {
    while(n1>0)
    {
      rem=n1%10;
      sum=sum+rem;
      n1=n1/10;

    }
    printf("sum=%d\n",sum);
  }
  else
  {
    printf("not a five digit number");
  }
  printf("\n**************\n");
}
