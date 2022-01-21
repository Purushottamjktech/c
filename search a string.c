#include <stdio.h>
#include <string.h>

int main() {

	char p[100];
	char s[100][100];
	int n;
	int i;

	printf("Enter Number of Strings: ");
	scanf("%d", &n);

	for (i = 0; i < n; ++i) {
         printf("enter the element of array\n");
		scanf("%s", s[i]);
	}

	printf("Enter string to search: ");
	scanf("%s", p);

	for (i = 0; i < n; ++i) {
		if (!strcmp(p, s[i])) {
			break;
		}
	}

	if (i != n) {
		printf("%s is present in the array at position %d", p, i);
	}
	else {
		printf("%s is not present ", p);
	}

}
