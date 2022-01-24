#include<stdio.h>
#include<string.h>
void main()
{
    int i,s;
   int str[] = {1,2,3,4,5,6,7,8,9,0};

   printf(" our reverse string is,  %d    ",str[i]);

    s = sizeof(str)/sizeof(str[0]);
   for(i=s-1;i>=0;i--)
   {
       printf("%d",str[i]);
   }

}
