//24 hours of a day
#include<stdio.h>
int main()
{
  int i;
  for(i=0;i<24;i++)
  {
    if(i==0)
    {
      printf("12:00 midnight\n");
    }
    else if(i<12 && i>0)
    {
      printf("%02d:00 AM\n",i);
    }
    else if(i==12)
    {
      printf("12:00 noon\n");
    }
    else
    {
      printf("%02d:00 PM\n",i%12);
    }
  }
}
