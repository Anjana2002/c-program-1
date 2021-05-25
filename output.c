//number pyramid
#include<stdio.h>
int main()
{
  int i,j,k,n=1;
  for(i=1;i<=4;i++)
  {
    //for spacing
    for(j=1;j<=(4-i);j++)
    {
      printf("\t");
    }
    //printing numbers
    for(k=1;k<=i;k++)
    {
      printf("%d\t\t",n);
      n++;
    }
    printf("\n");
  }
}
