//range
#include<stdio.h>
int main()
{
  int i,n,a,big,small,range;
  printf("\nHow many numbers you want to enter: ");
  scanf("%d",&n);
  printf("Enter the numbers: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a);
    if(i==0)
    {
      big=a;
      small=a;
    }
    else
    {
      if(big<a)
      {
        big=a;
      }
      if(small>a)
      {
        small=a;
      }
    }
  }
  range=big-small;
  printf("Range = %d\n\n",range);
}
