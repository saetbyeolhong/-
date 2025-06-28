#include <stdio.h>

int main() {
    double principal, interest, deposits, interest2;
    int year;

    printf("초기 예금액을 입력하세요: ");
    scanf_s("%lf", &principal);

    printf("연 이자율을 입력하세요 (퍼센트): ");
    scanf_s("%lf", &interest);

    printf("저축 기간을 입력하세요 (년): ");
    scanf_s("%d", &year);

    deposits = principal;

    for (int years = 1; years <= year; years++) {
        interest2 = deposits * (interest / 100);
        deposits += interest2;

        printf("%d년: 예금액=%.2f, 이자=%.2f\n", years, deposits, interest2);
    }

    return 0;
}