//checking armstrong numbers
#include<stdio.h>
#include<math.h>
void main()
{
  int n,n1,n2,l=0,rem,sum=0;
  printf("********************************\n\n");
  printf("Enter the number: ");
  scanf("%d",&n);
  n1=n;
  n2=n;
  while(n>0)
  {
    n=n/10;
    l++;
  }
  while(n1>0)
  {
    rem=n1%10;
    sum = sum+pow(rem,l);
    n1 = n1/10;
  }
  if(sum==n2)
  {
    printf("%d is an armstrong number.\n",n2);
    printf("\n\n********************************\n");
  }
  else
  {
    printf("%d is not an armstrong number.\n",n2);
    printf("\n\n********************************\n");
  }
}
