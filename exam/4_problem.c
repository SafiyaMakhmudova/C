#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
	char str[256];
	int i=0;

	printf("Enter sentence: ");
	scanf("%s", str);

	printf("Output: ");

	while(str[i]!='\0'){ 


		printf("%c", str[i]);
		if(str[i]=='+')
			printf("++");

	i++;
	}

	return 0;
}
