#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b,i ;int  c = 4; int d = 1;
	for (a = 1; a <= 9;a++) {
		for (b = 1; b <= c; b++) {
			printf(" ");
		}
		for (i = 1; i <= d; i++) {
			printf("*");
		}
		printf("\n");
		if (a==1||a==2||a==3||a==4) {
			c -= 1;
			d += 2;
		}
		else {
			c += 1;
			d -= 2;
		}
	}
	system("pause");
	return 0;
}