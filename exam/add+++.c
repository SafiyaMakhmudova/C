#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
	char str1[256];
	int i=0;

	printf("Enter sentence: ");
	fgets(str1, 256, stdin);

	printf("Output: ");

	while(str1[i]!='\0'){ 
		printf("%c", str1[i]);
		if(str1[i]=='+')
			printf("++");
	   i++;
	}

	return 0;
}
