#include<stdio.h>
void main()
{
int arr[10];
array(arr,10);

}

int array(int a[], int n)
{
int i,large,small;
printf("Enter the number of element\n");
scanf("%d",&n);
printf("\nInput the array elements : ");
for(i=0;i<n;++i)
scanf("%d",&a[i]);

large=small=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];
}

printf("\nThe smallest element is %d\n",small);
printf("\nThe largest element is %d\n",large);
}
