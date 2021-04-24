//to find the sum of digits of 5 digit number
#include<stdio.h>
void main()
{
  int n,sum=0,n1,rem=0;
  printf("\n**************\n");
  printf("Enter the five digit number: ");
  scanf("%d",&n);
  if(n<100000 && n>9999)
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
