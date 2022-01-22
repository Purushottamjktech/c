#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i, len;
char result;
int max =-1;
int count[256] = {0};

printf("please enter any string \n");
gets(str);

len = strlen(str);
for(i =0;i< len;i++)
{
count[str[i]]++;
}
for(int i=0;i<len;i++)
{
if(max< count[str[i]])
{
max = count[str[i]];
result =str[i];
}
}
printf("maximun occuring charecter in a string is %c",result);
}
