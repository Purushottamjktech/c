#include<stdio.h>
void main()
{
int months;

printf("enter month number to find the month name");
scanf("%d", &months);

switch(months)
{
case 1:
 printf(" month is january");
 break;

case 2:
 printf(" month is february" );
 break;

 case 3:
 printf("month is march");
 break;

 case 4:
    printf("month is april");

    case 5:
 printf("month is may");
 break;

 case 6:
 printf("month is june");
 break;
 case 7:
 printf("month is july");
 break;
 case 8:
 printf("month is August ");
 break;
 case 9:
 printf("month is september");
 break;
 case 10:
 printf("month is october");
 break;
 case 11:
 printf("month is november");
 break12:
 printf("month is December");
 break;
 default:
 printf("invalid month number");
}
}
