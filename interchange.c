//interchanging values
#include<stdio.h>
void main()
{
  float a,b,c;
  printf("\n************************\n");
  printf("Enter the values of a and b: ");
  scanf("%f%f",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("a=%f\n",a);
  printf("b=%f\n",b);
  printf("\n************************\n");
}
