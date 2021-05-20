#include<stdio.h>
void main()
{
  int n,i=1,p;
  printf("\nEnter the number: ");
  scanf("%d",&n);
  while(i<=20)
  {
    p=n*i;
    printf("%2d x %2d = %d\n",i,n,p);
    i++;
  }
  printf("\n");
}
