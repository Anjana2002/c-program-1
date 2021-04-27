#include<stdio.h>
int main()
{
  float l,b,area,peri;
  printf("\n************************\n");
  printf("Enter the length and breadth of rectangle: ");
  scanf("%f%f",&l,&b);
  
  peri=2*(l+b);
  area=l*b;
  printf("Area=%f\n",area);
  printf("perimeter =%f\n",peri);
  
  if(area>peri)
  {
    printf("area of rectangle is greater than perimeter");
  }
  
  else if(area<peri)
  {
    printf("area of rectangle is less than perimeter");
  }
  
  else
  {
    printf("area is equal to perimeter");
  }
  printf("\n************************\n\n");
}
