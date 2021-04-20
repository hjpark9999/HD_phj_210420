#include <stdio.h>
void plus10();
void print();
int sum = 0;

void main()
{
	int i = 0;

	while (1)
	{
		printf("1~3 중에 숫자를 입력해 보세요.\n");
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
			printf("프로그램이 종료 되었습니다\n");
			break;
		}
	}
		fgetc(stdin);
}

void plus10() {
	sum += 10;
	printf("10이 더해졌습니다.\n");
}

void print() {
	printf("현재값 = %d\n", sum);
}

