#include<stdio.h>
#include<string.h>
void main()
{
    char str[50], copy[50];
    printf("Enter the string: ");
    gets(str);
    printf("\nString 1 = %s", str);
    strcpy(copy, str);
    printf("\nString 2 = %s", copy);
}
