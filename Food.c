#include<stdio.h>
int main()
{
int choice;
printf("list of items:\n1.pizza,rs.230 \n2.burger,rs.120 \n3.pasta,rs.150 \n4.ice,rs.50 \n5.sandwich,rs.149");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("food item-pizza\n price-230");
break;
case 2:printf("food item-burger\n price-120");
break;
case 3:printf("food item-pasta\n price-150");
break;
case 4:printf("food item-ice\n price-50");
break;
case 5:printf("food item-sandwich\n price-149");
break;
default:printf("invalid choice");
}
return0;
}
