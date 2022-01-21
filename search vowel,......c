#include<stdio.h>
#include<String.h>

void main()
{
char str[100];
int vowels=0;
int consonent =0;
int number=0;
int space=0;
int special_charecter =0;
int i;


printf("enter the string\n");
gets(str);

for(int i =0; str[i] != '\0';i++)
{
    str[i] = tolower(str[i]);
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u')

    {
        vowels++;
    }
     else if ((str[i] >= 'a' && str[i] <= 'z')) {
      ++consonent;
    }
    else if (str[i] >= '0' && str[i] <= '9') {
      number++;
    }
     else if (str[i] == ' ') {
      space++;
}
else
{

     special_charecter++;
}

}
 printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonent);
  printf("\nnumbers: %d", number);
  printf("\nspaces: %d", space);
  printf("\nspecial_charecter %d",special_charecter);
}
