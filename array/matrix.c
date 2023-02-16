
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

	srand(time(0));
	
	int row, colm, temp;
	
	printf("Enter row number:");
	scanf("%i", &row);
	
	printf("Enter colum number: ");
	scanf("%i", &colm);
	
	int *ptr1, *ptr2;
	
	ptr1= (int *) malloc(row * sizeof(int));
	ptr2= (int*) malloc(colm * sizeof(int));
	
	int a[row][colm];

	for(int i=0; i<row; i++){
		for(int j=0; j<colm; j++){
			a[i][j]= rand () % 100;
		}
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<colm; j++){
			printf("%02i ", a[i][j]);
		}
	puts("");
	
	}
	
	puts("");
	
	for(int i=0; i<row; i++){
		for(int j=i+1; j<colm; j++){
		
			if(a[row-1][i]>a[row-1][j]) {
				temp=a[row-1][i];
				a[row-1][i]=a[row-1][j];
				a[row-1][j]=temp;
			}	
		}
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<colm; j++){
			printf("%02i ", a[i][j]);
		}
	puts("");
	
	}
	
	puts("");
	
	int max=a[row-1][0];
	
	for(int i=row-2, j=1; i>=0, j<colm; i--, j++){
		if(a[i][j]>max){
			max=a[i][j];
		}
	}
	
	printf("Max element is: %d\n", max);
	


	return 0;
}
