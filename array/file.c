#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct person1 {
	char fname[32];
	char sname[32];
	char gender[8];

} PERSON;


int main () {

	PERSON person[50];

	FILE *f=fopen("people.txt", "r+");
	int i=0, fe=0, me=0;
	char l;
	
	
	if(f==NULL) {
		printf("Error opening file\n");
		return 0;
	}
	
	while(!feof(f)) {
		l=fgetc(f);
		
		if(l==','){
			fseek(f, -1, SEEK_CUR);
			fputc(' ', f);
		}
	}
	
	fseek(f, 0, SEEK_SET);
	
	while(!feof(f)) {
		fscanf(f, "%s", person[i].fname);
		fscanf(f, "%s", person[i].sname);
		fscanf(f, "%s", person[i].gender);
		i++;
	}
	
	for(i=0; i<50; i++){
		printf("FULL NAME: %s %s\n gender: %s\n", person[i].fname, person[i].sname, person[i].gender);
		
	}
	
	puts(" ");
	
	for(i=0; i<50; i++) {
		if(strcmp(person[i].gender, "Female")==0){
			fe++;
	
		} else me++;
	}
			
	
	printf("Ayollar %d %%  Erkaklar %d %% \n", fe*100/50, me*100/50);
	
	fclose(f);

	return 0;
}
