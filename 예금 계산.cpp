#include <stdio.h>

int main() {
    double principal, interest, deposits, interest2;
    int year;

    printf("�ʱ� ���ݾ��� �Է��ϼ���: ");
    scanf_s("%lf", &principal);

    printf("�� �������� �Է��ϼ��� (�ۼ�Ʈ): ");
    scanf_s("%lf", &interest);

    printf("���� �Ⱓ�� �Է��ϼ��� (��): ");
    scanf_s("%d", &year);

    deposits = principal;

    for (int years = 1; years <= year; years++) {
        interest2 = deposits * (interest / 100);
        deposits += interest2;

        printf("%d��: ���ݾ�=%.2f, ����=%.2f\n", years, deposits, interest2);
    }

    return 0;
}