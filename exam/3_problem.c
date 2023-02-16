#include <stdio.h>


void shiftRight(int *a, int *b, int *c) {
	int temp=*a;
	*a=*c;
	*c=*b;
	*b=temp;


}

int main () {

	int x, y, z;

	printf("Enter number: ");
	scanf("%d %d %d",&x, &y, &z );

	int *ptrx=&x, *ptry=&y, *ptrz=&z;

	shiftRight(ptrx, ptry, ptrz);
	printf("%d %d %d\n", x, y, z);


}
