#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c; int e = 1, f = 14; int g = 10; int h = 6; int i = 10; int j = 14; int k=1; int l;
	printf("(A)");
	for (int i = 1; i <= 12;i++) {
		printf(" ");
	}
	printf("(B)");
	for (int i = 1; i <= 12; i++) {
		printf(" ");
	}
	printf("(C)");
	for (int i = 1; i <= 12; i++) {
		printf(" ");
	}
	printf("(D)");
	for (int i = 1; i <= 12; i++) {
		printf(" ");
	}
	printf("\n");
	
	for (a = 1; a <= 10;a++ ) {
		for (b = 1; b <= e;b++) {
			printf("*");
		}
		for (c = 1; c <= f;c++) {
			printf(" ");
		}

		for (b = 1; b <= g; b++) {
			printf("*");
		}
		for (c = 1; c <= h; c++) {
			printf(" ");
		}
		for (b = 1; b <= i; b++) {
			printf("*");
		}
		for (c = 1; c <= j; c++) {
			printf(" ");
		}
		for (b = 1; b <= k; b++) {
			printf("*");
		}
		k += 1;
		i -= 1;
		j -= 1;
		g -= 1;
		h += 2;
		e += 1;
		f -= 1;
		printf("\n");
	}
	system("pause");
	return 0;
}