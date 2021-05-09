//check whether a year is leap or not
#include<stdio.h>
void main()
{
  int y;
  printf("*******************\n");
  printf("enter the year: ");
  scanf("%d",&y);

  if(y%100==0)
  {
    if(y%400==0)
    {
      printf("leap year\n");
      printf("*******************\n");
    }
    else
    {
      printf("not leap year\n");
      printf("*******************\n");
    }
  }

  else
  {
    if(y%4==0)
    {
      printf("leap year\n");
      printf("*******************\n");
    }
    else
    {
      printf("not leap year\n");
      printf("*******************\n");
    }
  }
}
