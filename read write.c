#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fptr;
     int id,age;
    char name[50];
    char course[50];

    fptr = fopen("student.txt","w");
    printf("enter student name \n");
    gets(name);
    printf("enter student id \n");
    scanf("%d",&id);
    printf("enter student age \n");
    scanf("%d",&age);
    printf("enter student course \n");
    scanf("%s",&course);

    fprintf(fptr,"%s,%d,%d,%s",name,id,age,course);
    fclose(fptr);

    fptr = fopen("student.txt","r");

    printf(" name=%s \n", name);
   printf(" id=%d \n", id);
   printf(" age=%d \n", age);
   printf(" course=%s \n", course);

   fclose(fptr);

}






