// P121 Programming 3번

#define PI 3.14
#include <stdio.h>
int main(void)
{
    double radius = 0;
    double surface, volume;

    printf("반지름을 입력하시오: ");
    scanf("%lf", &radius);

    surface = 4.0 * PI * (radius * radius);
    volume = 4.0/3.0 * PI * (radius * radius * radius);

    printf("구의 표면적: %lf", surface);
    printf("구의 부피: %lf", volume);

    return 0;
}