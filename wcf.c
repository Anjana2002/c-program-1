//find the wind chill factor
#include<stdio.h>
#include<math.h>
void main()
{
  float v,t,wcf;
  printf("\n************************\n");
  printf("Enter velocity in mph: ");
  scanf("%f",&v);
  printf("Enter temperature in fahrenheit: ");
  scanf("%f",&t);
  wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.6);
  printf("Wind chill factor = %f",wcf);
  printf("\n************************\n");
}
