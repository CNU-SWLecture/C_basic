// P121 Programming 2번

#include <stdio.h>
int main(void)
{
    double x;
    
    printf("지수헝식으로 실수를 입력하시오: ");
    scanf("%le", &x);

    printf("소수점 표시 형식으로는 %lf입니다.", x);

    return 0;
}