#include<stdio.h>
void main()
{
  int a,b,c;
  printf("\n************************\n");
  printf("Enter the rupees: Rs. ");
  scanf("%d",&a);

  b=a/100;
  a=a%100;
  printf("%d x 100 \n",b);

  b=a/50;
  a=a%50;
  printf("%d x 50 \n",b);

  b=a/10;
  a=a%10;
  printf("%d x 10 \n",b);

  b=a/5;
  a=a%5;
  printf("%d x 5 \n",b);

  b=a/2;
  a=a%2;
  printf("%d x 2 \n",b);

  b=a/1;
  a=a%1;
  printf("%d x 1 \n",b);


  printf("************************\n\n");
}
