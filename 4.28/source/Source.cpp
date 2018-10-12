#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, f,g; float d,e;
	for (;;) {
		printf("1.經理 2.工讀生 3.傭金工人 4.寄件工人\n");
		printf("請輸入工資代碼(1~4)：");
		scanf_s("%d", &a);
		printf("\n");
		switch (a) {
		case 1:
			printf("每周固定薪資\n");
			printf("\n");
			break;
		case 2:
			printf("請輸入一小時的薪水");
			scanf_s("%d", &b);
			printf("請輸入一周工作多小時");
			scanf_s("%d", &c);
			if (c <= 40) {
				d= c * b;
				printf("賺取%.2f元\n",d);
				printf("\n");
			}
			if (c >40) {
				d = c * b + (c - 40)*b / 2;
				printf("賺取%.2f元\n", d);
				printf("\n");
			}
			break;
		case 3:
			printf("請輸入每周總銷售額：");
			scanf_s("%f",&e);
			d = 250 + e * 0.057;
			printf("賺取%.2f元\n",d);
			printf("\n");
			break;
		case 4:
			printf("請輸入一件產品薪水：");
			scanf_s("%d",&g);
			printf("請輸入每周賣出多少件：");
			scanf_s("%d",&f);
			d = g * f;
			printf("賺取%.2f元\n",d);
			printf("\n");
			break;
		}
	}
	system("pause");
	return 0;
}