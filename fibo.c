//print fibonacci
#include<stdio.h>
void main()
{
  int a=0,b=1,c,i,n;
  printf("\nEnter the number of terms: ");
  scanf("%d",&n);
  printf("Fibonacci series: ");
  printf("%d ",a);
  printf("%d ",b);

  for(i=0;i<n-2;i++)
  {
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
  }
  printf("\n\n");
}
