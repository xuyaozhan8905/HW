#include<stdio.h>
#include<stdlib.h>
int main(void) {
	for (;;) {
		float  b, c, d, e,f,g; int a;
		printf("Enter account number (-1 to END)¡G");
		scanf_s("%d",&a);
		if (a==-1) {
			exit(0);
		}
		printf("Enter beginning balance¡G");
		scanf_s("%f", &b);
		printf("Enter total charges¡G");
		scanf_s("%f", &c);
		printf("Enter total credits¡G");
		scanf_s("%f", &d);
		printf("Enter credit limit¡G");
		scanf_s("%f", &e);
		g = b + c - d;
		if (g>e) {
			printf("Account¡G      %d\n", a);
			printf("Credit limit¡G %.2f\n", b);
			printf("Balance¡G %.2f\n", g);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}