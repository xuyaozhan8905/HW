#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c;
	printf("Enter side1�G");
	scanf_s("%d",&a);
	printf("Enter side2�G");
	scanf_s("%d", &b);
	printf("Enter hypotenuse�G");
	scanf_s("%d", &c);
	if ((c*c ==a*a + b*b)&&(c<=500)) {
		printf("���ϧά������T����.\n");
	}
	else if ((c*c != a*a + b*b)&&(c<=500)) {
		printf("���ϧΤ��������T����.\n");
	}
	else {
		printf("The hypotenuse is out of range.\n");
	}
	system("pause");
	return 0;
}