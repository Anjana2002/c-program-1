//number divisible by 11
#include<stdio.h>
void main()
{
  int n1,n2,n,sum=0,count=0;
  printf("\n************************\n");
  printf("Enter the limits: ");
  scanf("%d%d",&n1,&n2 );
  n=n1;
  printf("The numbers divisible by 11 between %d & %d:\n",n1,n2);
  while(n<=n2)
  {
    if(n%11==0)
    {
      printf("%d\n",n);
      sum=sum+n;
      count++;
    }
    n++;
  }
  printf("%d is the sum of these numbers\n",sum);
  printf("%d is the count\n",count);
  printf("************************\n\n");
}
