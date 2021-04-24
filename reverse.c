//reverse a  five digit number
#include<stdio.h>
void main()
{
  int n,rem=0;
  printf("\n************************\n");
  printf("Enter a five digit number: ");
  scanf("%d",&n);
  if(n<100000 && n>9999)
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
