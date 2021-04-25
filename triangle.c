//check whether a triangle is valid or not
#include<stdio.h>
void main()
{
  float a,b,c,sum;
  printf("\n************************\n");
  printf("Enter the three angles of a triangle: ");
  scanf("%f%f%f",&a,&b,&c);
  //sum of the angles of triangle =180
  sum=a+b+c;
  if(sum==180)
  {
    printf("It is a triangle");
  }
  else
  {
    printf("It is not a triangle");
  }
  printf("\n************************\n");
}
