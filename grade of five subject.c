#include<stdio.h>
void main()
{
int m1,m2,m3,m4,m5;
char per;
printf("enter the marks of physics");
scanf("%d",&m1);

printf("enter the marks of chemistry");
scanf("%d",&m2);

printf("enter the marks of biology");
scanf("%d",&m3);

printf("enter the marks of mathmatics");
scanf("%d",&m4);

printf("enter the marks of computer");
scanf("%d",&m5);


per = (m1+m2+m3+m4+m5)/5;

if(per >= 90)
{
printf("your grade is A ");
}

else if(per >= 80)
{
printf(" your grade is B");

}
else if(per >=70)
{
printf(" your grade is C");

}
else if(per >= 60)
{
printf("your grade is D");
}

else if(per >= 40)
{
printf("your grade is E");
}

else
printf("your grade is F");
}
