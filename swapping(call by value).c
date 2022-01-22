#include<stdio.h>
void main()
{
int a=10;
int b =20;
printf("value before swapping a= %d,b=%d\n\n",a,b);
swap(a,b);

}

void swap(int a,int b )
{
int temp;
temp =a;
a= b;
b= temp;

printf("after swapping a =%d, b= %d",a,b);
}
