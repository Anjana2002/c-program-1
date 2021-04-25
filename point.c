//check the point lie on x axis or y axis or origin
#include<stdio.h>
int main()
{
  float x,y;
  printf("\n************************\n");
  printf("Enter the point: ");
  scanf("%f%f",&x,&y);
  if(y==0 && x!=0)
  {
    printf("The point lie on x-axis");
  }
  else if(x==0 && y!=0)
  {
    printf("The point lie on y axis");
  }
  else if(x==0 && y==0)
  {
    printf("The point is on origin");
  }
  else
  {
    printf("The point doesnot lie on x and y axis");
  }
  printf("\n************************\n");
}
