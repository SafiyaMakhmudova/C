#include <stdio.h>


int main () {
	int a[5][5];

	printf("Enter 25 numbers: ");

	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	a[1][3]=0;
	a[3][1]=0;

	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
		  	if(i==0 || j==2 || i==j || i==4){
				printf("%2d ", 0);
			}

			else printf("%2d ", a[i][j]);



		}

		puts("");

	}


	return 0;
}
