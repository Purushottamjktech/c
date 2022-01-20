#include<stdio.h>

void main()
{
int a,b,c;

 printf("enter three numbers:\n");
 scanf("%d%d%d", &a, &b, &c);

 if(a > b && a>c)
 {
     if(b>c)
        printf("second largest number is: %d", b);
     else
        printf("second largest number is: %d", c);
 }
 else if(b>c && b > a)
 {
     if(c>a)
        printf("second largest number is :%d ", c);
     else
        printf("second largest number is :%d", a);
 }
 else if(a >b)

     printf("second largest number is :%d", a);

     else
        printf("second largest number is :%d", b);


}


