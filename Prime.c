include<stdio.h>
int main()
{
int i=2,n;
printf("enter a number");
scanf("%d",&n);
while(n%i!=0)
{
i++;
}
if(n==i)
{
printf("prime number");
}
else
{ 
printf("not a prime no");
}
return 0;
}
