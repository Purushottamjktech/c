#include<stdio.h>

void main()
{
    struct student
    {
        char id[10];
        char name[50];
        char branch[20];
    };

    struct staff
    {
        char id[10];
        char name[19];

    };

    struct nonstaff
    {
        char name[20];
        char age[20];
    };

    struct Admin
    {
        struct student std[3];
        struct staff sta[3];
        struct nonstaff nst[3];
    };

    struct Admin a;

    for(int i =0;i<3;i++)
    {
        printf("student detail: %d\n",(i+1));
        printf("enter student id \n");
        scanf("%s",a.std[i].id);
        printf("enter student name \n");
        scanf("%s",a.std[i].name);
        printf("enter student branch\n");
        scanf("%s",a.std[i].branch);
        printf("enter staff details: %d\n",(i+1));
        printf("enter staff name\n");
        scanf("%s",a.sta[i].name);
        printf("enter staff id\n");
        scanf("%s",a.sta[i].id);
        printf("enter nonstaff details: %d\n",(i+1));
        printf("enter nonstaff name\n");
        scanf("%s",a.nst[i].name);
        printf("enter nonstaff age\n");
        scanf("%s",a.nst[i].age);

    printf("name of student  is %s\n", a.std[i].name);
    printf("id of student is  %s\n", a.std[i].id);
    printf("branch is %s\n", a.std[i].branch);
    printf("name of staff is: %s\n",a.sta[i].name);
    printf("id of staff is: %s\n",a.sta[i].id);
    printf("name of nonstaff is: %s\n",a.nst[i].name);
    printf("name of nonstaff is: %s\n",a.nst[i].age);
}}
