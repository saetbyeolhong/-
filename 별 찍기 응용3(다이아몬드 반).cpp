#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int i;
    int j;

    printf("���� �Է¼��� :");
    scanf_s("%d", &n);

    for (i = n; i >=0; i--) {
        for (j = 1; j <= n; j++) {
            if (j > i) {
                printf("*");
            }
            else {
                printf(" ");
            }

        }

        printf("\n");

    }
    for (i = 2; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j >= i) {
                printf("*");
            }

            else {
                printf(" ");
            }

        }

        printf("\n");
    }
 
 }

    
