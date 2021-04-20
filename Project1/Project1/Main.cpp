#include "Main.h"


void main()
{
	int i = 0,sum=0;

	while (1)
	{
		printf("1~3 중에 숫자를 입력해 보세요.\n");
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
			printf("프로그램이 종료 되었습니다\n");
			break;
		}
	} // while
		fgetc(stdin);
}

void plus10(int *sum) {
	*sum += 10;
	printf("10이 더해졌습니다.\n");
}

void print(int sum) {
	printf("현재값 = %d\n", sum);
}

