#include <stdio.h>
#include <string.h>

typedef struct computer {
	char model[64];
	char cpu[64];
	int ram;
	int ssd;
} PC;

void fill(PC *c1, int lenght) {
	printf("Model, cpu, ram, ssd shu ketma-ketlikda to'ldiring!\n");
	scanf(" %s %s %i %i", c1[lenght].model, c1[lenght].cpu, &c1[lenght].ram, &c1[lenght].ssd);
}

void print(PC c1[], int lenght) {
         printf(" N MODEL         CPU          RAM    SSD\n");
	     
	for(int i=0; i<lenght; i++ ) {
	     printf(" %i. %-10s | %-10s | %3i | %3i |\n",i+1, c1[i].model, c1[i].cpu, c1[i].ram, c1[i].ssd);
	}
}

void del(PC p[]) {
	int index;
	
	printf("Nechanchi komputerni o'chirmoqchisiz?- ");
	scanf("%d", &index);
	
	strcpy(p[index-1].model,"0");
	strcpy(p[index-1].cpu,"0");
	p[index-1].ram=0;
	p[index-1].ssd=0; 

}


int main () {
	PC c1[5];
	
	int number, i=0, lenght=0;
   do {	
   
   	puts("");
	printf("\t\t\tAmalni tanleng:\n");
	printf("  To'ldirish-->1 \n  Chiqarish-->2 \n  O'chirish-->3 \n  Exit-->4 \n\n");
	scanf("%d", &number);
   	   	
	switch (number) {
		case 1: {
		
   	if(lenght>4) { printf("Siz maksimum komputerlar soniga egasiz. Dasturni yoping!\n"); 
   	} else {
			fill(c1,lenght);
			lenght++;
			}
			break;
		}
		
		case 2: {
			print(c1, lenght);
			break;
		}
		
		case 3: {
			del(c1);
			//lenght--;
			break;
		}
		
		case 4: {
			printf("EXIT\n");
			return 0;
		}
		
		default:{
			printf("Bunday amal yo'q!\n");
			break;
		}
	
	
	}
	
     } while (1);



	return 0;
}
