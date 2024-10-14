// P162 Programming 7번

#include <stdio.h>
int main(void)
{
    double x = 0, f = 0;

    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x);

    f = (x * x * x - 20) / (x - 7);

    printf("수식의 값은 %lf입니다.", f);

    return 0;
}