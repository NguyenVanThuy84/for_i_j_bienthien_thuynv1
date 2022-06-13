#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,max;
	printf("Bai toan i,j,max \n");
	printf("nhap gia tri max = ");
	scanf ("%d",&max);
	for (i=0, j = max; i <= max; i++, j--)
	{
		printf ("\t %d + %d = %d \n", i,j, i +j);
	}
	return 0;
}
