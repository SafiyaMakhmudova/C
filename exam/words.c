#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main () {

	char str1[128];
	char array1[128], array2[128];
	int  max=0, min=128;
	printf("Hello\n");

	FILE *f=fopen("1.txt", "r");

	while(!feof(f)){
	
	   fscanf(f, "%s", str1);
	       if(max<strlen(str1)){
	   		max=strlen(str1);
			strcpy(array1, str1);
	   	
		}
		
	   fscanf(f, "%s", str1);
	   	if(min>strlen(str1)){
	   		strcpy(array2, str1);
	   		 min=strlen(str1);
	   	}
	}
	
	fclose(f);

	FILE *f1=fopen("output.txt", "w");
	
	fputs("Eng uzun so'z: ", f1);
	fprintf(f1, "%s", array1);
	
	fputs("\n", f1);
	
	fputs("Eng qisqa so'z:", f1);
	fprintf(f1, "%s", array2);
	
	fclose(f1);
	return 0;
}

