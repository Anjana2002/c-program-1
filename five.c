//to find the sum of digits of 5 digit number
#include<stdio.h>
void main()
{
  int n,sum=0,n1,rem=0,l=0;
  printf("\n**************\n");
  printf("Enter the five digit number: ");
  scanf("%d",&n);
  //counting how many digits
  n1=n;
  while(n1>0)
  {
    n1=n1/10;
    l++;
  }
  if(l==5)
  {
    while(n>0)
    {
      rem=n%10;
      sum=sum+rem;
      n=n/10;
    }
    printf("sum=%d\n",sum);
  }
  else
  {
    printf("not a five digit number");
  }
  printf("\n**************\n");
}
