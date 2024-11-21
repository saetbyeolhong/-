#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("별의 갯수를 입력하시오 : \n");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++) {
        printf("*"\n);
    }

    printf("별의 갯수는 %d개입니다.", n);
}