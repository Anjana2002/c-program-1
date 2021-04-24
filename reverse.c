//reverse a  five digit number
#include<stdio.h>
void main()
{
  int n,n1,count=0,rem=0;
  printf("\n************************\n");
  printf("Enter a five digit number: ");
  scanf("%d",&n);
  n1=n;
  while(n1>0)
  {
    n1=n1/10;
    count++;
  }
  if(count==5)
  {
    printf("Reverse of the number: ");
    while(n>0)
    {
      rem=n%10;
      printf("%d",rem);
      n=n/10;
    }
  }
  else
  {
    printf("Not a five digit number");
  }
  printf("\n************************\n");
}
