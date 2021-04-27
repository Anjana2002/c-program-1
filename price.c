#include<stdio.h>
void main()
{
  int s,c,p,l;
  printf("\n************************\n");
  printf("Enter the cost price: ");
  scanf("%d",&c);
  
  printf("Enter the selling price: ");
  scanf("%d",&s);
  
  if(s<c)
  {
    printf("Seller made a loss of");
    l=c-s;
    printf(" %d",l);
  }
  
  else if(s>c)
  {
    printf("Seller made a profit of");
    p=s-c;
    printf(" %d",p);
  }
  
  else
  {
    printf("Seller neither earns profit nor loss");
  }
  printf("\n************************\n\n");
}
