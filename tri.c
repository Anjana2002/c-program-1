//check whether the triangle isosceles, equilateral or right angled triangle.
#include<stdio.h>
void main()
{
  float a,b,c;
  printf("\n");
  printf("Enter the sides of a triangle: " );
  scanf("%f%f%f",&a,&b,&c );

  if(a==b && b==c)
  {
    printf("This is an equilateral triangle\n\n" );
  }
  else if(a==b || b==c || a==c)
  {
    printf("This is an isosceles triangle\n\n" );
  }
  else
  {
    printf("This is a right angle triangle\n\n" );
  }
}
