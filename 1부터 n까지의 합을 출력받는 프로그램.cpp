#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int fac=0;
    int i=0;

    printf("���� ���ϰ� ���� �ڿ����� �����ÿ� :");
    scanf_s("%d", &n);

    while (i<=n) {

        fac += i;
        i++;
    }

    if (n == 0) {
        printf("0�� �Էµ��� �ʽ��ϴ�.");
    }

    else {
        printf("���� : %d", fac);
    }
        
}