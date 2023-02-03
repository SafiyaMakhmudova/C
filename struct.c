#include <stdio.h>
#include <string.h>

typedef struct fruits {
	char name[64]; 
	int price;
	int weight;
} FRUIT;


int main () {
	FRUIT m1, m2, m3, m4, m5; 
	
	strcpy(m1.name, "Olma"); m1.price= 2345; m1.weight= 23;
	
	strcpy(m2.name, "Uzum"); m2.price= 6000; m2.weight= 45;
		
	strcpy(m3.name, "Banan"); m3.price= 9800; m3.weight= 50;
		
	strcpy(m4.name, "Shaftoli"); m4.price= 12340; m4.weight= 12;
	
	strcpy(m5.name, "Qulupnay"); m5.price= 25000; m5.weight= 25;
	
	
	int number, kg, sum, price;	
   do {	
	printf("\t\t\tMenyu: \n");
	
	printf("%d  %-10s| %d| %i|\n", 1, m1.name, m1.price, m1.weight);	
	printf("%d  %-10s| %d| %i|\n", 2, m2.name, m2.price, m2.weight);	
	printf("%d  %-10s| %d| %i|\n", 3, m3.name, m3.price, m3.weight);	
	printf("%d  %-10s| %d| %i|\n", 4, m4.name, m4.price, m4.weight);	
	printf("%d  %-10s| %d| %i|\n", 5, m5.name, m5.price, m5.weight);
	printf("Chiqish uchun 0 ni bosing.\n\n");	
	
	printf("Tanleng: ( 0, 1, 2, 3, 4, 5)");
	scanf("%d",&number);
	
	
	switch(number) {
		case 0: {
			printf("EXIT\n");
			return 0;
		}

		case 1: {
		    
		    printf("%d --> %s| %d| %d\n", 1, m1.name, m1.price, m1.weight);
		    
		    printf("Nechi kg olasiz: ");
	 	    scanf("%d", &kg);
	
		    printf("Pulingizni kiriting: ");
       		    scanf("%d", &price);
	
		    if(kg<=m1.weight){
			sum=m1.price*kg;
		             
		     } else printf("Buncha kg yo'q\n");
		     
		     if(price>=sum) {
			price=price-sum;
			printf(" Pulingiz: %d\n", price);		    
		        printf("Xaridingiz uchun rahmat\n");
		     
		     } else printf("Pulingiz kam\n");
		   
		     break;
		}
		case 2: {
		    
		    printf("%d --> %s| %d| %d\n", 2, m2.name, m2.price, m2.weight);
		    
		    printf("Nechi kg olasiz: \n");
	  	    scanf("%d", &kg);
	
		    printf("Pulingizni kiriting: \n");
		    scanf("%d", &price);
	
		    
		    if(kg<=m2.weight){
			sum=m2.price*kg;
		             
		     } else printf("Buncha kg yo'q\n");
		     
		     if(price>=sum) {
			price=price-sum;
			printf(" Pulingiz: %d\n", price);		    
		        printf("Xaridingiz uchun rahmat\n");
		     
		     } else printf("Pulingiz kam\n");
		    
		    break;
		}
		case 3: {
		    
		    printf("%d --> %s| %d| %d\n", 3, m3.name, m3.price, m3.weight);
		    
		    printf("Nechi kg olasiz: ");
		    scanf("%d", &kg);
	
		    printf("Pulingizni kiriting: ");
		    scanf("%d", &price);
	
		    
		    if(kg<=m3.weight){
			sum=m3.price*kg;
		             
		     } else printf("Buncha kg yo'q\n");
		     
		     if(price>=sum) {
			price=price-sum;
			printf(" Pulingiz: %d\n", price);		    
		        printf("Xaridingiz uchun rahmat\n");
		     
		     } else printf("Pulingiz kam\n");
		   
		    break;
		}
		case 4: {
		    printf("%d --> %s| %d| %d\n", 4, m4.name, m4.price, m4.weight);
		    
		    printf("Nechi kg olasiz: ");
		    scanf("%d", &kg);
	
		    printf("Pulingizni kiriting: ");
		    scanf("%d", &price);
	
		    
		    if(kg<=m4.weight){
			sum=m4.price*kg;
		             
		     } else printf("Buncha kg yo'q\n");
		     
		     if(price>=sum) {
			price=price-sum;
			printf(" Pulingiz: %d\n", price);		    
		        printf("Xaridingiz uchun rahmat\n");
		     
		     } else printf("Pulingiz kam\n");
		   
		    break;
		}
		case 5: {
		    
		    printf("%d --> %s| %d| %d\n", 5, m5.name, m5.price, m5.weight);
		    
		    printf("Nechi kg olasiz: ");
		    scanf("%d", &kg);
	
		    printf("Pulingizni kiriting: ");
		    scanf("%d", &price);
	
		    
		    if(kg<=m5.weight){
			sum=m5.price*kg;
		             
		     } else printf("Buncha kg yo'q\n");
		     
		     if(price>=sum) {
			price=price-sum;
			printf(" Pulingiz: %d\n", price);		    
		        printf("Xaridingiz uchun rahmat\n");
		     
		     } else printf("Pulingiz kam\n");
		   
		    break;
		}
		default: {
		    printf("Bunday raqam yo'q: \n");
		    break;
		}
	}
    } while (1);

	return 0;		
}
