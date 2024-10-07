// P161 Programming 4번

#include <stdio.h>
int main(void)
{
    double x, y, z;

    printf("3과목의 점수를 입력한다: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("총점=%.2lf\n", x+y+z);
    printf("평균=%.2lf\n", (x+y+z)/3);

    return 0;
}