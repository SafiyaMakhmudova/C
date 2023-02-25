#include <stdio.h>

	int main() {

	int n,m,d=500,d1=400,d2=300,d3=200,d4=700;
	scanf("%i %i",&n,&m);

	switch (n) {
		case 1:
			printf("Americano\n" );
			printf("%d sum\n",m-d);
				break;
		case 2:
			printf("Caffe Latte\n");
			printf("%d sum\n",m-d1);
				break;
		case 3:
			printf("Lemon Tea\n");
			printf("%d sum\n",m-d2);
				break;
		case 4:
			printf("MacCoffe\n");
			printf("%d sum\n",m-d3);
				break;
		case 5:
			printf("Cappuccino\n");
			printf("%d sum\n",m-d4);
				break;
	}

	return 0;
}
