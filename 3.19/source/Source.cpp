#include<stdio.h>
#include<stdlib.h>
int main() {
	for (;;) {
		float a, b, c, d;
		printf("Enter loan principal(-1 to end)¡G");
		scanf_s("%f", &a);
		printf("Enter interest rate¡G");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days¡G");
		scanf_s("%f", &c);
		d = a * b*c / 365;
		printf("The interest charge is $%.2f\n", d);
		printf("\n");
	}
	system("pause");
	return 0;

}