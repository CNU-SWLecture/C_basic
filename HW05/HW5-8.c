// P122 Programming 8번

#include <stdio.h>
int main(void)
{
    double d_m = 0.0;
    double h = 0.0, m = 0.0, s = 0.0;
    double time, d_km;
    double v;

    printf("거리를 미터로 입력하시오: ");
    scanf("%lf", &d_m);

    printf("시간을 입력하시오: ");
    scanf("%lf", &h);
    printf("분을 입력하시오: ");
    scanf("%lf", &m);
    printf("초를 입력하시오: ");
    scanf("%lf", &s);

    time = h + m/60 + s/3600;
    d_km = d_m/1000;

    v = d_km / time;
    printf("속도: %lf", v);

    return 0;
}