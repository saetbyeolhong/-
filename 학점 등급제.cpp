#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	printf("������ �Է��Ͻÿ�.\n");
	scanf("%d", &n);

	if (n >= 90)
	{
		printf("A+�Դϴ�.\n");
	}
	else if (n >= 80)
	{
		printf("B+�Դϴ�.\n");
	}
	else if(n >= 70)
	{
		printf("C+�Դϴ�.\n");
	}
	else
	{
		printf("D+�Դϴ�.\n");
	}
}