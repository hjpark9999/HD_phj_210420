#include <stdio.h>
void plus10();
void print();
int sum = 0;

void main()
{
	int i = 0;

	while (1)
	{
		printf("1~3 �߿� ���ڸ� �Է��� ������.\n");
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d", &i);
		
		if (i == 1)
		{
			plus10();

		}
		else if (i == 2)
		{
			print();
		}
		else {
			printf("���α׷��� ���� �Ǿ����ϴ�\n");
			break;
		}
	}
		fgetc(stdin);
}

void plus10() {
	sum += 10;
	printf("10�� ���������ϴ�.\n");
}

void print() {
	printf("���簪 = %d\n", sum);
}

