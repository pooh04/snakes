#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("enter 2 nos");
  scanf("%d%d",&a,&b);
  temp=a;
  a=b;
  b=temp;
  printf("after swapping a=%d and b=%d",a,b);
  return 0;
}
