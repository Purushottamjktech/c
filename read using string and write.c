#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
   int id;
   int age;
   char name[20];
};
int main () {
   FILE *of;
   of= fopen ("pheonix.txt", "w");
   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   struct Student inp1 = {1,23, "purushottam"};

   fwrite (&inp1, sizeof(struct Student), 1, of);

   if(fwrite != 0)
      printf("Contents to file written successfully !\n");
   else
      printf("Error writing file !\n");
   fclose (of);
   FILE *inf;
   struct Student inp;
   inf = fopen ("pheonix.txt", "r");
   if (inf == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   while(fread(&inp, sizeof(struct Student), 1, inf))
      printf ("roll_no = %d name = %s age = %d\n" , inp.id, inp.name,inp.age);
   fclose (inf);
   int temp =0;
   temp = rename("pheonix.txt", "purushottam.txt");

}
