// P160 Programming 1번

#include <stdio.h>
int main(void)
{
    double w = 0;
    double h = 0;

    printf("체중을 입력하시오: ");
    scanf("%lf", &w);

    printf("신장을 입력하시오(단위: 미터): ");
    scanf("%lf", &h);

    printf("BMI: %.2lf", w / (h * h));
    
    return 0;
}