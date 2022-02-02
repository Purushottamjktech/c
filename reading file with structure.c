#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int i;
    int n;
struct Employee {
    char company[20];
    char name[20];
    char id[10];
};
struct department{
    char tech[20];
    char salary[20];
};
struct admin{

struct Employee emp[3];
struct department dep[3];
};

struct admin a;
FILE *fptr;


    fptr = fopen("input.txt", "r");
    if (!fptr) {
        fprintf(stderr, "Could not read file\n");
        return 1;
    }

 printf("details of employee is \n");
 for(i =0;i<3;i++)
 {
     fscanf(fptr,"%s %s %s", &a.emp[i].company,&a.emp[i].name,&a.emp[i].id);
     printf("%s\n",a.emp[i].company);
     printf("%s\n",a.emp[i].name);
     printf("%s\n",a.emp[i].id);
     printf("\n");

 }
 FILE *fatr;
 fatr = fopen("input1.txt","r");
 if (!fatr) {
        fprintf(stderr, "Could not read file\n");
        return 1;
    }

 printf("department details is:\n");

 for(i=0;i<3;i++)
 {
 fscanf(fatr, "%s %s", &a.dep[i].tech,&a.dep[i].salary);
 printf("%s\n",a.dep[i].tech);
 printf("%s\n",a.dep[i].salary);
 printf("\n");
 }

 for(i =0;i<3;i++)
 {
     while(fread(&a,sizeof(struct admin),1,fptr))
       // printf("details %d\n",i+1);
        fprintf("company = %s\n name =%s\n id =%s\n",a.emp[i].company,a.emp[i].name,a.emp[i].id);
     fclose(fptr);
 }
 for(i =0;i<3;i++)
 {
     while(fread(&a,sizeof(struct admin),1,fatr))

        fprintf("tech = %s\n salary =%s\n",a.dep[i].tech,a.dep[i].salary);
        printf("\n");
     fclose(fatr);
 }
}
