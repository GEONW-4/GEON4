#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int i = 0, bun = 0;
	printf("Hello World를 실행할 횟수 작성 ");
	scanf("%d", &bun);

	while (i < bun)
	{
		printf("Hello World!\n");
		i++;
	}//문제 1. 프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello World!"를 출력하는 프로그램을 작성해보자.

	int c = 1, bae = 0;
	printf("입력할 숫자: ");
	scanf("%d", &bae);

	while (c < bae + 1)
	{
		printf("%d ", 3 * c);
		c++;
	}//문제 2. 프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼 3의 배수를 출력하는 프로그램을 작성해보자. 예를 들어서 5를 입력 받았다면, 3 6 9 12 15를 출력해야 한다.
	int num = 0, sum = 0;

	while (1)
	{
		printf("\n입력할 정수: ");
		scanf("%d", &num);
		sum += num;
		printf("입력한 정수의 합 :%d\n", sum);

		if (num == 0)
		{
			break;
		}
	}//문제 3. 프로그램 사용자로부터 계속해서 정수를 입력 받는다. 그리고 그 값을 계속해서 더해 나간다. 이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속되어야 하며, 0이 입력되면 입력된 모든 정수의 합을 출력하고 프로그램을 종료시킨다.

	int dan = 0, num1 = 9;
	printf("몇 단? ");
	scanf("%d", &dan);

	while (num1 > 0)
	{
		printf("%d x %d = %d\n", dan, num1, dan * num1);
		num1--;
	}//문제 4. 프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 출력하는 프로그램을 작성해보자.

	int num3, num4, l = 0;
	double total = 0.0;
	printf("몇개의 정수를 입력할 것입니까? ");
	scanf("%d", &num3);

	while (l < num3)
	{
		printf("정수 입력 : ");
		scanf("%d", &num4);
		total += num4;
		l++;
	}
	printf("평균 : %f\n", total / num3);
	//문제 5. 프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되 
	// 다음 두 가지 조건을 만족시켜야 한다."먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼 정수를 입력 받는다." 
	// "평균 값은 소수점 이하까지 계산해서 출력한다."
	return 0;
}

