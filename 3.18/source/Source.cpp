#include<stdio.h>
#include<stdlib.h>
int main() {
	for (;;) {
		float a, b, c;
		printf("Enter sales in dollars(-1 to end)¡G");
		scanf_s("%f",&a);
		if (a==-1) {
			exit(0);
		}
		b = a * 0.09 +200;
		printf("Salary is¡G ");
		printf("%.2f\n",b);
	}
	system("pause");
	return 0;
}