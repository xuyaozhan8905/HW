#include<stdio.h>
#include<stdlib.h>
int main() {
	float a, e; float c = 0; float b; int d;
	b = 0.1;
	printf("Enter the investment¡G");
	scanf_s("%f",&a);
	for (d = 1; d <= 15;d++) {
		a = a + c;
		c = a * b;
		printf("²Ä%d¦~©ÒÁÈ¡G",d);
		printf("%.2f",c);
		b = b + 0.05;
		printf("\n");
	}
	system("pause");
	return 0;
}