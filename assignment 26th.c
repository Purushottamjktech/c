#include <stdio.h>
int main(void) {
  // creating a FILE variable
  FILE *fptr;

  // creating a variable to store filename
  char filename[255];

  // get file path from the user
  printf("Enter the filename: ");
  scanf("%s", filename);

  // open the file in write mode
  fptr = fopen(filename, "w");

  if (fptr != NULL) {
    printf("File created successfully!\n");

    // close the file
    fclose(fptr);
  }
  else {
    printf("Failed to create the file.\n");
  }

  {
      FILE *fp1, *fp2;
      char fname1[50],fname2[50],c;
      printf("Enter filename to open for reading : ");
      scanf("%s", fname1); //jkusername.txt
      // Open one file for reading
      fp1 = fopen(fname1, "r");
      if (fp1 == NULL)
     {
            printf("%s file does not exist..", fname1);
            exit(0);
      }
      printf("\nEnter filename to append the content : ");
      scanf("%s", fname2); //studentdetails.txt
      // Open another file for appending content
      fp2 = fopen(fname2, "a");
      if (fp2 == NULL)
      {
            printf("%s file does not exist...", fname2);
            exit(0);
      }
      // Read content from file
      c = fgetc(fp1);
      while (c != EOF)
      {
            fputc(c,fp2);
            c = fgetc(fp1);
      }
      printf("\nContent in %s appended to %s", fname1,fname2);
      fclose(fp1);
      fclose(fp2);
      return 0;
}

  return 0;
}
