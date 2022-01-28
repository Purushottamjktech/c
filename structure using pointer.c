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
    struct Admin p[9];
    struct Admin *ptr = NULL;

    ptr = p;

    for(int i=0;i<3;i++)

    {
        printf("enter the details  %d\n",(i+1));

        printf("enter the student name\n");
        scanf("%s",ptr->std[i].name);
        printf("enter the student id\n");
        scanf("%s",ptr->std[i].id);
        printf("enter the student branch\n");
        scanf("%s",ptr->std[i].branch);

        printf("enter staff detais  %d\n",(i+1));
        printf("enter the staff name\n");
        scanf("%s",ptr->sta[i].name);
        printf("enter the staff id\n");
        scanf("%s",ptr->sta[i].id);

        printf("enter nonstaff details %d\n",(i+1));

        printf("enter nonstaff name\n");
        scanf("%s",ptr->nst[i].name);
        printf("enter nonstaff age\n");
        scanf("%s",ptr->nst[i].age);

        ptr++;
    }
    // here we assign the pointer again because the pointer is gone to the last because of line number 63
    ptr = p;
    for(int i=0;i<3;i++)
    {
        printf("name of student is %s\n",ptr->std[i].name);
        printf("branch of student is %s\n",ptr->std[i].branch);
        printf("id of student is %s\n",ptr->std[i].id);

        printf("name of staff is %s\n",ptr->sta[i].name);
        printf("id of staff is %s\n",ptr->sta[i].id);

        printf("name of nonstaff is %s\n",ptr->nst[i].name);
        printf("age of nonstaff is %s\n",ptr->nst[i].age);

        ptr++;
    }

}
