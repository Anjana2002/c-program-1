#include<stdio.h>
void main()
{
    float phy,chem,maths,per,sum;
    printf("enter the marks of maths: ");
    scanf("%f",&maths);
    printf("enter the marks of phy: ");
    scanf("%f",&phy);
    printf("enter the marks of chem: ");
    scanf("%f",&chem);

    sum=maths+phy+chem;
    per=(sum/300)*100;
    printf("percentage = %f\n",per);
    if(per>=80)
    {
      printf("DISTINCTION\n");
    }
    else if(60<=per<=80)
    {
      printf("FIRST CLASS\n");
    }
    else if(50<=per<=60)
    {
      printf("SECOND CLASS\n");
    }
    else if(40<=per<=50)
    {
      printf("THIRD CLASS\n");
    }
    else
    {
      printf("FAIL\n");
    }
}
