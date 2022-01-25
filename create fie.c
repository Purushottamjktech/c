#include<stdio.h>

void main()
{
    FILE *fptr;
    char ch;
     fptr = fopen("purushottam.txt","w");

     printf("enter your contents   \n ");

     while((ch =getchar()) != '\o')
     {
         // write into f
         putc(ch,fptr);
     }
     fclose(fptr);

     fopen("purushottam.txt", "r");
     printf("\n file content   \n");
     while((ch = getc(fptr)) != EOF)
        {
            printf("%c",ch);

        }
        printf("\n end of fie \n");
        fclose(fptr);

}
