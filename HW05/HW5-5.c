// P121 Programming 4번

#include <stdio.h>
int main(void)
{
    double x = 0, f = 0;

    printf("x의 값을 입력하시오 : ");
    scanf("%lf", &x);

    f = 3*x*x*x - 7*x*x + 9.0;

    printf("다항식의 값은 %lf입니다. \n", f);

    return 0;
}