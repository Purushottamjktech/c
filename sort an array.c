#include<stdio.h>
void main()
{
    int arr[50];
    int i,j,n,temp;

    printf("enter the value of n\n");
    scanf("%d",&n);

    printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i] >arr[j])
        {
             temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        }
    }
    for(i=0;i<n;i++)
        printf("\n %d \n",arr[i]);
}
