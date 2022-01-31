#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
   int id;
   char name[20];
};

struct EmpDetails{
    char department[20];
    int salary;
};
int main () {
   FILE *of;
   FILE *opp;
   of= fopen ("c1.txt", "w");
   opp = fopen("c2.txt","w");
   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   struct Employee inp1 = {01, "purushottam"};
   struct Employee inp2 = {02, "sunny"};


   struct EmpDetails inp3 = {"IT", 123456};
   struct EmpDetails inp4 = {"development", 120000};


   fwrite (&inp1, sizeof(struct Employee), 1, of);
   fwrite (&inp2, sizeof(struct Employee), 1, of);

   fwrite (&inp3, sizeof(struct EmpDetails), 1, opp);
   fwrite (&inp4, sizeof(struct EmpDetails), 1, opp);
 //  if(fwrite != 0)
   //   printf("Contents to file written successfully !\n");

   fclose (of);
   fclose(opp);


   FILE *inf;
   FILE *ptt;
   struct Employee inp;
   struct EmpDetails emp;
   inf = fopen ("c1.txt", "r");
   ptt = fopen("c2.txt","r");

   while(fread(&inp, sizeof(struct Employee), 1, inf))
   {
       printf("contents of file c1.txt is : \n");
      printf ("id = %d\nname = %s\n\n", inp.id, inp.name);
   }
   while(fread(&emp, sizeof(struct EmpDetails),1,ptt))
   {
       printf("contents of file c2.txt is : \n");
       printf("department =%s\nsalary = %d\n",emp.department,emp.salary);
   }

   fclose (inf);
   fclose(ptt);
}
