// P162 Programming 8번

#include <stdio.h>
int main(void)
{
    double n1 = 0, n2 = 0;

    printf("2개의 실수를 입력하시오: ");
    scanf("%lf %lf", &n1, &n2);

    printf("합의 정수부: %d", (int)n1 + (int)n2);

    return 0;
}