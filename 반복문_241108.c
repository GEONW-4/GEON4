#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello world! %d \n", num);
		num++;
	}//while문

	int dan = 0, num1 = 1;
	printf("몇 단? ");
	scanf("%d", &dan);

	while (num1 < 10)
	{
		printf("%d x %d = %d \n", dan, num1, dan * num1);
		num1++;
	}//구구단

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
	}//2단부터 9단까지 반복
	return 0;
}

