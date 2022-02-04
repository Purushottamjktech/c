#include <conio.h>
#include <stdio.h>
#include <string.h>

// Driver Code
int main()
{
    FILE *fs=fopen("bookk.csv","r");
    if(fs==NULL)
    {

    perror("Error");
    exit(1);
    }
    char line[200];
    while(fgets(line,sizeof(line),fs))
    {

        char *token;
        token=strtok(line,",");
        while(token!=NULL)
        {

            printf("%-10s",token);
            token=strtok(NULL,",");
        }
        printf("\n");

        }
        return 0;
    }


// Driver Code
//int main()
//{
//    // Substitute the file_path string
//    // with full path of CSV file
//    int n,i;
//    FILE* fp = fopen("bookkk.csv", "a+"); //w+
//
//    char name[50];
//    int accountno, amount;
//
//    if (!fp) {
//        // Error in file opening
//        printf("Can't open file\n");
//        return 0;
//    }
//    // Asking user input for the
//    // new record to be added
//    printf("enter how many data you want to enter:\n");
//    scanf("%d",&n);
//    for(i =0;i<n;i++)
//    {
//        printf("data number %d",i+1);
//    printf("\nEnter Account Holder Name\n");
//    scanf("%s", &name);
//    printf("\nEnter Account Number\n");
//    scanf("%d", &accountno);
//    printf("\nEnter Available Amount\n");
//    scanf("%d", &amount);
//
//    // Saving data in file
//    fprintf(fp, "%s, %d, %d\n", name,
//            accountno, amount);
//    }
//    printf("\nNew Account added to record");
//
//    fclose(fp);
//    return 0;
//}
