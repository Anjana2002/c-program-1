//area of a triangle
#include<stdio.h>
void main()
{
  float b,h,area;
  printf("\n***********************************\n");
  printf("Enter the base and height of triangle: ");
  scanf("%f%f",&b,&h);
  area=b*h*1/2;
  printf("Area=%fcm^2\n",area);
  printf("***********************************\n\n");
}
