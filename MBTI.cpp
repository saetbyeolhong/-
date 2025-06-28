#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char first, second, third, fourth;

    printf("MBTI 성격 유형을 입력하세요 (예: ENFP, ISTJ): ");
    scanf("%c%c%c%c", &first, &second, &third, &fourth);


    // 첫 번째 문자 (E/I) - 외향적, 내향적
    if (first == 'E') {
        printf("E: 외향적이고 활발하며 사람들과의 교류를 즐깁니다.\n");
    }
    else if (first == 'I') {
        printf("I: 내향적이고 혼자 있는 시간을 좋아하며, 깊은 생각을 선호합니다.\n");
    }

    // 두 번째 문자 (S/N) - 감각적, 직관적
    if (second == 'S') {
        printf("S: 사실적이고 구체적인 정보를 선호하며, 경험에 근거한 결정을 내립니다.\n");
    }
    else if (second == 'N') {
        printf("N: 직관적이고 창의적이며, 미래에 대한 가능성을 탐색하는 경향이 있습니다.\n");
    }

    // 세 번째 문자 (T/F) - 사고적, 감정적
    if (third == 'T') {
        printf("T: 논리적이고 분석적이며, 감정보다는 객관적인 사실을 중요시합니다.\n");
    }
    else if (third == 'F') {
        printf("F: 감정적이고 사람과의 관계를 중요시하며, 타인의 감정을 잘 이해하려 합니다.\n");
    }

    // 네 번째 문자 (J/P) - 계획적, 유연한
    if (fourth == 'J') {
        printf("J: 계획적이고 조직적이며, 예측 가능한 것을 선호합니다.\n");
    }
    else if (fourth == 'P') {
        printf("P: 유연하고 자유로우며, 다양한 가능성을 열어두는 것을 좋아합니다.\n");
    }

    return 0;
}

