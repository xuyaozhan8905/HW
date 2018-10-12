#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c;
	printf("Enter side1：");
	scanf_s("%d",&a);
	printf("Enter side2：");
	scanf_s("%d", &b);
	printf("Enter hypotenuse：");
	scanf_s("%d", &c);
	if ((c*c ==a*a + b*b)&&(c<=500)) {
		printf("此圖形為直角三角形.\n");
	}
	else if ((c*c != a*a + b*b)&&(c<=500)) {
		printf("此圖形不為直角三角形.\n");
	}
	else {
		printf("The hypotenuse is out of range.\n");
	}
	system("pause");
	return 0;
}