#include<stdio.h>
void main()
{
int x =10;
int y = 20;

printf(" vaue before swapping %d %d\n", x, y);
swap(&x,&y);
printf("vaue after swapping %d %d",x,y);

}

void swap(int *a, int *b)
{
*a = *a + *b;
*b = *a -*b;
*a = *a - *b;
}
