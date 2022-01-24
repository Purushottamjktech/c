#include<stdio.h>
#include<string.h>
void main()
{
   char str[50] = "my name is purushottam";
   reverse(str);
   printf(" our reverse string is,  %s    ",str);
}

void reverse( char* str)
{
    int i,s;
    char *start_ptr, *end_ptr, cha;

    s = strlen(str);

    start_ptr =str;
    end_ptr = str;

    for(i =0;i<s-1;i++)
    {
        end_ptr++;
    }

    for(i=0;i<s/2;i++)
    {
        cha =*end_ptr;
        *end_ptr = *start_ptr;
        *start_ptr =cha;

        start_ptr++;
        end_ptr--;
    }
}


