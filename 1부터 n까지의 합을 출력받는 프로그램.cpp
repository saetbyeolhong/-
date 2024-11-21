#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int fac=0;
    int i=0;

    printf("합을 구하고 싶은 자연수를 적으시오 :");
    scanf_s("%d", &n);

    while (i<=n) {

        fac += i;
        i++;
    }

    if (n == 0) {
        printf("0은 입력되지 않습니다.");
    }

    else {
        printf("합은 : %d", fac);
    }
        
}