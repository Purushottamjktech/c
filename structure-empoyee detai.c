#include<stdio.h>

void main()
{
    struct EmpolyeeDetails
    {
        char name[20];
        char id[20];


        struct
        {
            char branch[20];
            char tech[20];
        }DepartmentDetails;

        struct
        {
            char class[20];
            char grade[20];
        }DepartmentDivion;
    };
    struct EmpolyeeDetails std;

    printf("enter EmpolyeeDetails \n ");
    printf("enter name of empoyee \n");
    scanf("%s",std.name);
    printf("enter id of empoyee \n");
    scanf("%s",std.id);

    printf("enter DepartmentDetails \n ");
    printf("enter branch \n");
    scanf("%s",std.DepartmentDetails.branch);
    printf("enter tech \n");
    scanf("%s",std.DepartmentDetails.tech);

    printf("enter epartmentDivion details \n ");
    printf("enter class\n");
    scanf("%s", std.DepartmentDivion.class);
    printf("enter grade\n");
    scanf("%s", std.DepartmentDivion.grade);

    printf("name of Employee is  %s\n",std.name);
    printf("id of Employee is  %s\n",std.id);

    printf("branch is   %s\n",std.DepartmentDetails.branch);
    printf("tech is   %s\n",std.DepartmentDetails.tech);

    printf("class is   %s\n",std.DepartmentDivion.class);
    printf("grade is   %s\n",std.DepartmentDivion.grade);

}
