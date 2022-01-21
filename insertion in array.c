#include<stdio.h>
void main()
{
int arr[7];
array(arr,7);
}

void array(int a[],int n)
{
printf("enter the size of n: \n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter the element of array \n");
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
int p =13;
int index_value = 2;
n++;
for(int i=n-1;i>=index_value;i--)
{
a[i] = a[i-1];
    a[index_value -1] = p;

}
printf("resultant array is \n ");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}

}
