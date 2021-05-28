//calculate overtime pay of 10 employees. 
#include<stdio.h>
int main()
{
  int i=1,time,j,pay;
  for(i=1;i<=10;i++)
  {
    printf("Enter the working hour: ");
    scanf("%d",&time);
    if(time>=40)
    {
      time=time-40;
      pay=time*12;
      printf("Overtime pay of %dth employee= %d\n\n",i,pay);
    }
    else
    {
      printf("No overtime pay.\n\n");
    }
  }
}
