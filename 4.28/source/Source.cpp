#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, f,g; float d,e;
	for (;;) {
		printf("1.�g�z 2.�uŪ�� 3.�Ī��u�H 4.�H��u�H\n");
		printf("�п�J�u��N�X(1~4)�G");
		scanf_s("%d", &a);
		printf("\n");
		switch (a) {
		case 1:
			printf("�C�P�T�w�~��\n");
			printf("\n");
			break;
		case 2:
			printf("�п�J�@�p�ɪ��~��");
			scanf_s("%d", &b);
			printf("�п�J�@�P�u�@�h�p��");
			scanf_s("%d", &c);
			if (c <= 40) {
				d= c * b;
				printf("�Ȩ�%.2f��\n",d);
				printf("\n");
			}
			if (c >40) {
				d = c * b + (c - 40)*b / 2;
				printf("�Ȩ�%.2f��\n", d);
				printf("\n");
			}
			break;
		case 3:
			printf("�п�J�C�P�`�P���B�G");
			scanf_s("%f",&e);
			d = 250 + e * 0.057;
			printf("�Ȩ�%.2f��\n",d);
			printf("\n");
			break;
		case 4:
			printf("�п�J�@�󲣫~�~���G");
			scanf_s("%d",&g);
			printf("�п�J�C�P��X�h�֥�G");
			scanf_s("%d",&f);
			d = g * f;
			printf("�Ȩ�%.2f��\n",d);
			printf("\n");
			break;
		}
	}
	system("pause");
	return 0;
}