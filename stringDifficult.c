#include <stdio.h>

int size( char str[]) {
	int i = 0;
	for(; str[i]!='\0'; i++);
	return i-2;
}

int main () {
	char str[100];

	printf("Enter some text- ");
	fgets(str, 100, stdin);

	int start, end = -1;
	
	for(int i=size(str); i>=0; i--) {
		
		if((i==0 || str[i] == ' ') && end != -1) {
			if(i==0) start = 0;
			else start = i+1;
			
			for(int j=start; j<=end; j++){
				printf("%c", str[j]);
			}
			
			printf(" ");
			end = -1;

		} else if(end  == -1 && str[i] != ' ') {
			end = i;
			if(i == 0) printf("%c", str[0]);
		}
		
	}

	printf("\n");
	return 0;
}
