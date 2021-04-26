// program to find the cube root of an integer
#include<stdio.h>
#include<math.h>
void main()
{
  int n,c;
  printf("\n************************\n");
  printf("Enter the number: ");
  scanf("%d",&n);
  c=cbrt(n);
  if(c*c*c==n)
  {
    printf("%d is the cuberoot of %d",c,n);
  }
  else
  {
    printf("%d is not a perfect cube",n);
  }
  printf("\n************************\n");
}
