#include<stdio.h>
int main()
{
  int n;
  printf("\n\n**************************\n");
  printf("Enter the number: ");
  scanf("%d",&n);
  if(n>0)
  {
    printf("Absolute value:%d",n);
  }
  else
  {
    n=n*-1;
    printf("Absolute value:%d",n);
  }
  printf("\n**************************\n\n");
}
