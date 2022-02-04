#include <stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char StrFile[200];
int n;

//int Sid;
//fp = fopen( "myfile1.csv", "w");
//if(fp == NULL)
//{
 //   printf("error");
//}
//fprintf(fp,"rose\nlotus\njasmine\npallavi");
//fclose(fp);

fp = fopen("myfile1.csv","r");

printf("How many value you want to see enter\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
fscanf(fp,"%s",&StrFile);
//fprintf(stdout,"%s\n%s\n%s",StrFile);
printf("%s\n",StrFile);
}
fclose(fp);
}
