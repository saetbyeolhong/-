#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("���� ������ �Է��Ͻÿ� : \n");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++) {
        printf("*"\n);
    }

    printf("���� ������ %d���Դϴ�.", n);
}