#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct FlightInfo {
	char fligh_no[16];
	char departure[6];
	char arrival[6];
	char destination[128];
	char aircraft[128];
} FLIGHT;


void addNewFlight(FLIGHT *s, int lenght) {
	int y;
	
	printf("Reys qo'shmoqchimisiz?(1, 0) ");
	scanf("%i", &y);
	
	if(y==1) {
	
	
		for(int i=1; i<=lenght; i++) {
			printf(" %i Reys raqami.", i);
			scanf("%s",s[i].fligh_no);
		
			printf("Uchish vaqti (18.30).");
			scanf("%s",s[i].departure);
		
			printf("Qo'nish vaqti(22.50).");
			scanf("%s",s[i].arrival);
		
			printf("Qo'nish shahri.");
			scanf("%s",s[i].destination);
		
			printf("Samalyot turi.");
			scanf("%s",s[i].aircraft);
	
		}
	
		puts("");
	
	} else {
		return ;
	}
	
}

void listAllFlights(FLIGHT s[], int lenght) {
	for(int i=0; i<lenght; i++) {
		printf("Reys raqami--%s\nUchish vaqti--%s\nQo'nish vaqti--%s\nQo'nish shahri--%s\nSamalyot turi--%s\n", s[i].fligh_no, s[i].departure, s[i].arrival, s[i].destination, s[i].aircraft);
		
		printf("----------------\n");
	}
}

int  showLongFlights(char f[] ) {
	int h=0, min=0, index;
	
	for(int j=0; j<strlen(f)+1; j++) {
	
	   if( f[j]==':') {
	   	index=j;
	   	if(j==1){
	   	   h=(f[0]-'0');
	  
	   	} else if(j==2) {
	   		   h=(f[0]-'0')*10+(f[1]-'0');
	   		   
	   	   }
	   } else if (f[j]=='\0') {
	   		if(index+1==j-1) {
	   		    min=(f[index+1] - '0');
	   		
	   		} else {
	   		    min=(f[index+1] - '0')*10 + (f[index+2] - '0'); 
	   		
	   		}
	   }
	   
	}
	
	return (h*60)+min;
}


void show(FLIGHT *s, int lenght) {

	for(int i=0; i<lenght; i++) {
			
	    int depInMinute = showLongFlights( s[i].departure);
	    int avlInMinute = showLongFlights(s[i].arrival);
			
	   	
		if(avlInMinute - depInMinute >= 480) {
		    printf(
		    	" 8 soatdan ko'p bo'lgan parvozlar.\n" );
		    printf(
		        "Reys raqami--%s\nUchish vaqti--%s\nQo'nish vaqti--%s\nQo'nish shahri--%s\nSamalyot turi--%s\n",
		    	
		    	s[i].fligh_no, 
		    	s[i].departure, 
		    	s[i].arrival, 
		    	s[i].destination, 
		    	s[i].aircraft
		    );
		}
	}
	
	puts("");
}


int main () {

	FLIGHT fly[10];
	
	char t='9', y='7';
	char o = t+y;
	printf("---%i", o);
	int size=0,lenght=0, number;
	
	
	strcpy(fly[0].fligh_no, "RY236");
	strcpy(fly[0].departure, "8:30");
	strcpy(fly[0].arrival, "22:15");
	strcpy(fly[0].destination, "Tashkent");
	strcpy(fly[0].aircraft, "Airbus A380");
	lenght+=1;

   do{ 
   		printf("\t\t\t Tanlang:\n");
   		printf("\t1.Yangi reys qo'shish.\n\t2.Hamma reyslari ko'rish.\n\t3.Uchish vaqti 8 soatdan ko'p bo'lgan parvozlar.\n\t4.Chiqish.\n");
   		 
   		scanf("%i", &number);

	switch (number) {
		case 1:{
			addNewFlight(fly,lenght);
			lenght++;
			break;
		}
		
		case 2: {
			listAllFlights(fly, lenght);
			break;
		
		}
		
		case 3: { 
			show(fly, lenght);
			
			break;
		
		}
	
		case 4:{
			printf("EXIT.\n");
			return 0;
		}
		
		default: {
			break;
		}
	
	
	}
	
	
    } while(1);	
    
	return 0;
}

