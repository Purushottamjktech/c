#include<stdio.h>
void main()
{
int num[10];
int i,j,temp,n;
printf("enter the element of the array\n");
scanf("%d", &n);
printf("enter the elements\n");
for(i=0; i<n; i++)
scanf("%d", &num[i]);
for(i=0; i<n; i++){
for(j=i+1; j< n;j++)
{
if(num[i] > num[j]){
temp = num[i];
num[i] = num[j];
num[j] = temp;
}
}
}
printf("2nd largest element is %d\n",num[n-2]);
printf("2nd smallest element is %d", num[1]);
}
