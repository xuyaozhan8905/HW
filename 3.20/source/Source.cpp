#include<stdio.h>
#include<stdlib.h>
int main(void) {
	for (;;) {
		float a,b, c;;
		printf("Enter # of hours worked(-1 to end)¡G");
		scanf_s("%f", &a);
		if (a == -1) {
			exit(0);
		}
		printf("Enter hourly rate of the worker ($00.00)¡G");
		scanf_s("%f", &b);
		if (a <= 40) {
			c = a * b;
		}
		if(a>=40.01) {
			c = a*b+(a-40)*b/2;
		}
		printf("Salary is $%.2f\n",c);
		printf("\n");
	}
	system("pause");
	return 0;
}