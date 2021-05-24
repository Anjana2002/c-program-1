
#include<stdio.h>
int main()
{
    int i,p=100000,j=2020;
    for(i=1;i<=10;i++)
    {
      p=p-(p*10)/100;
      printf("population of %d= %d\n",j,p);
      j--;
    }
}
