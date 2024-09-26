// P78 Programming 5번

#include <stdio.h>
int main(void)
{
    int n1 = 0, n2 = 0, n3 = 0;
    int avg = 0;

    printf("정수를 입력하시오 :");
    scanf("%d", &n1);
    printf("정수를 입력하시오 :");
    scanf("%d", &n2);
    printf("정수를 입력하시오 :");
    scanf("%d", &n3);

    avg = (n1 + n2 + n3) / 3;
    printf("평균은 %d입니다.\n", avg);

    return 0;
}