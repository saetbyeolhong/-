#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	printf("점수를 입력하시오.\n");
	scanf("%d", &n);

	if (n >= 90)
	{
		printf("A+입니다.\n");
	}
	else if (n >= 80)
	{
		printf("B+입니다.\n");
	}
	else if(n >= 70)
	{
		printf("C+입니다.\n");
	}
	else
	{
		printf("D+입니다.\n");
	}
}