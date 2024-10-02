// P122 Programming 8번

// 기호 상수 정의
#define MINUTE_PER_HOUR 60
#define SECONDS_PER_HOUR 3600
#define METER_PER_KILOMETER 1000

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

    // time = h + m/60 + s/3600;
    // d_km = d_m/1000;
    
    // 기호 상수를 사용하여 계산
    time = h + m / MINUTE_PER_HOUR + s / SECONDS_PER_HOUR;
    d_km = d_m / METER_PER_KILOMETER;

    v = d_km / time;
    printf("속도: %lf", v);

    return 0;
}