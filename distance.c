//receive values of latitude  and longitude in degrees of two places on earth and output the distance
#include<stdio.h>
#include<math.h>
void main()
{
  float l1,l2,g1,g2,d;
  printf("\n************************\n");
  printf("enter the latitude and longitude of a place: ");
  scanf("%f%f",&l1,&g1);
  printf("enter the latitude and longitude of another place: ");
  scanf("%f%f",&l2,&g2);
  l1=l1*3.14/180;
  l2=l2*3.14/180;
  g1=g1*3.14/180;
  g2=g2*3.14/180;
  d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g1-g2));
  printf("Distance in nautical miles:%f",d);
  printf("\n************************\n");
}
