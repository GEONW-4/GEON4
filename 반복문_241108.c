#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello world! %d \n", num);
		num++;
	}//while��

	int dan = 0, num1 = 1;
	printf("�� ��? ");
	scanf("%d", &dan);

	while (num1 < 10)
	{
		printf("%d x %d = %d \n", dan, num1, dan * num1);
		num1++;
	}//������

	int cur = 2;
	int is = 0;

	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}//2�ܺ��� 9�ܱ��� �ݺ�
	return 0;
}

