#include<stdio.h>
#include<stdlib.h>
void main()
{

    int i,j,k,day,dt=1;

 printf("Enter Total Numbers of Days in a Month \n ");
    scanf("%d",&day);

 printf("\nEnter First Day Start From monday End With Sunday \n ");
    scanf("%d",&k);

    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
    printf("\n");

    for(j=k;j>0;j--)
    {
        printf("\t");
    }

    while(dt<=day)
    {
        if(k!=0)
        {
         if(k%7==0)
         printf("\n");
        }

  printf("%d\t",dt);
        dt++;
        k++;
    }
}
