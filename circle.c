
#include<stdio.h>
#include<math.h>
void main()
{
  float x,y,r,m,n ,d;
  printf("\n************************\n");
  printf("Coordinates of centre of circle: ");
  scanf("%f%f",&x,&y);

  printf("Radius of circle: ");
  scanf("%f",&r);

  printf("Enter a point: ");
  scanf("%f%f",&m,&n);

  //finding the distance between the centre and point
  d=sqrt((m-x)*(m-x)+(n-y)*(n-y));

  if(d<r)
  {
    printf("The point lies inside the circle");
  }

  else if(d>r)
  {
    printf("The point lies outside the circle");
  }

  else
  {
    printf("The point lies on the circle");
  }
  
  printf("\n************************\n\n");
}
