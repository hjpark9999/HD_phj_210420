#include "Main.h"


void main()
{
	int i = 0,sum=0;

	while (1)
	{
		printf("1~3 �߿� ���ڸ� �Է��� ������.\n");
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d", &i);
		
		if (i == 1)
		{
			plus10(&sum);

		}
		else if (i == 2)
		{
			print(sum);
		}
		else {
			printf("���α׷��� ���� �Ǿ����ϴ�\n");
			break;
		}
	} // while
		fgetc(stdin);
}

void plus10(int *sum) {
	*sum += 10;
	printf("10�� ���������ϴ�.\n");
}

void print(int sum) {
	printf("���簪 = %d\n", sum);
}

