//area of a triangle
#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,s,area;
  printf("\n***********************************\n");
  printf("Enter the three sides of triangle: ");
  scanf("%f%f%f",&a,&b,&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area=%fcm^2\n",area);
  printf("***********************************\n\n");
}
