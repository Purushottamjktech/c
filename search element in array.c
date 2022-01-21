#include<stdio.h>
void main()
{
    int array[5];

    arr(array,5);
}
void arr(int a[], int n)
{
    printf("enter the value of n \n");
    scanf("%d",&n);
    for(int i =0;i< n;i++)
    {
        printf("enter the value of a\n");
        scanf("%d",&a[i]);

    }

    for(int i =0;i<n;i++)
    {
        printf("%d\t" ,a[i]);
    }

}
