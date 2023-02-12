#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct FileType {
	char filename [128];
	char extension[5];
	long sizee;
} TYPE;


void createNewFile(TYPE *s, int lenght) {
	
	//int add;
	
	//printf("nechta yangi fayl qo'shmoqchisiz?");
	//scanf("%i",&add);
	
	 
	printf(" File name, extension, size shu ketma -ketlikda to'ldiring!\n");
	scanf("%s %s %li", s[lenght].filename, s[lenght].extension, &s[lenght].sizee);
}



void Extension(TYPE s[], int lenght) {
	int index;

	printf("Nechinchi faylni ko'rmoqchisiz.\n");
	scanf("%i", &index);

	printf("File name: %s\n",s[index-1].filename); 
	
	for(int j=0; j<strlen(s->extension); j++) {
		if(s->extension[j]>='a' && s->extension[j]<='z') s->extension[j]-=32;
	}	
	
	printf("Extension: %s\n", s[index-1].extension);
	
	printf("File siz: %ld in bytes. %ld in Mb\n",s[index-1].sizee, s[index-1].sizee/1048576);

}

void  listAllFiles(TYPE s[], int lenght) {
	for(int i=0; i<lenght; i++) {
		printf("%i.File name: %s\n Extension: %s\n ",i+1, s[i].filename, s[i].extension);
		puts("");
	}
}


int main () {
	
	
	TYPE user[10];
	 
	int lenght=0, i=0, chose;
	
	
	
   do {
	printf("\t\t\tchoose:\n");
	printf("\t1.Create new file.\n\t2.Show details.\n\t3.List all files\n\t4.Exit\n");
	scanf("%i", &chose);

	switch (chose) {
		case 1:{
		     createNewFile(user, lenght);
		     lenght++;
		     
			
			break;
		}

		case 2: {
		     Extension(user, lenght);
			break;
		}

		case 3: {
		     listAllFiles(user, lenght);
			break;
		}
		
		case 4: {
			printf("EXIT.\n");
			return 0;
		}

		default:{
			break;
		}


	}
	
	//system("clear");
	
	} while(1);
    
	
	 return 0;

}
