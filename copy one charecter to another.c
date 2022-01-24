#include<stdio.h>
#include<string.h>
void main()
{
    char original[100], dupicate[100];
    printf("Enter original string\n");
    gets(original);
    copy_string(dupicate, original);
    printf("Target string is \"%s\"\n", dupicate);
    return 0;
}

void copy_string(char *dupicate, char *original)
{
    while(*original !=0 )
    {
        *dupicate = *original;
        original++;
        dupicate++;
    }
}

