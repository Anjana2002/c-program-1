//bmi
#include<stdio.h>
int main()
{
  float w,h,bmi;
  printf("Enter the weight(in kg): ");
  scanf("%f",&w);
  printf("Enter the height(in metre): ");
  scanf("%f",&h);
  bmi=w/(h*h);
  printf("Body mass index = %f\n",bmi );
  if(bmi<=15.0)
  {
    printf("Starvation\n");
  }
  else if(15.1<=bmi && bmi<=17.5)
  {
    printf("Anorexic\n");
  }
  else if(17.6<=bmi && bmi<=18.5)
  {
    printf("Underweight\n");
  }
  else if(18.6<=bmi && bmi<=24.9)
  {
    printf("Ideal\n");
  }
  else if(25.0<=bmi && bmi<=25.9)
  {
    printf("Overweight\n");
  }
  else if(30.0<=bmi && bmi<=30.9)
  {
    printf("Obese\n");
  }
  else
  {
    printf("Morbidly Obese\n");
  }
}
