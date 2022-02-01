#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,n;
    int largest;
    int *num;



    printf("Enter value of n: ");
    scanf("%d", &n);

    num = (int *)calloc(n,sizeof(int));

  for(i=0;i<n;i++)
  {
      printf("enter number%d\n",i+1);
      scanf("%d",num+i);

      for (int i = 1; i < n; ++i) {
        if (*num < *(num + i)) {
      *num = *(num + i);
    }
  }
  }
  largest = *num;
  printf("largest number is %d\n",largest);
  free(num);
  return 0;
}
