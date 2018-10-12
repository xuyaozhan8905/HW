#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b,c,d;
	printf("Enter length¡G");
	scanf_s("%d", &b);
	printf("Enter breadth¡G");
	scanf_s("%d",&a);
	for (c = 1; c <= a; c++)
	{
		printf("+");
	}
	printf("\n");
	for (d = 1; d <= (b - 2);d++) {
		printf("+");
		for (int i = 1; i <= (a - 2); i++) {
			printf(" ");
		}
			printf("+\n");
	}
	for (c = 1; c <= a; c++)
	{
		printf("+");
	}
	printf("\n");
	system("pause");
	return 0;
}