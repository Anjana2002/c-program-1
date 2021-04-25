//check 3 points fall on straight line
#include<stdio.h>
void main()
{
  float x1,x2,x3,y1,y2,y3,m,n;
  printf("\n************************\n");
  printf("Enter the first points:");
  scanf("%f%f",&x1,&y1);
  printf("Enter the second points:");
  scanf("%f%f",&x2,&y2);
  printf("Enter the third points:");
  scanf("%f%f",&x3,&y3);
  m=(y2-y1)/(x2-x1);
  n=(y3-y2)/(x3-x2);
  if(m==n)
  {
    printf("Three points lie on a straight line");
  }
  else
  {
    printf("Points lie not on a straight line ");
  }
  printf("\n************************\n");
}
