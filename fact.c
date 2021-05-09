//factorial of a numbers
#include<stdio.h>
void main()
{
  int n, i=1,fact=1;
  printf("\n******************\n");
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("%d!=",n);
  while(i<=n)
  {
    if(i<n)
    {
      printf("%d x ",i);
    }
    else
    {
      printf("%d",i);
    }
    fact=fact*i;
    i++;
  }
  printf("=%d\n",fact);
  printf("******************\n\n");
}
