// P161 Programming 5번

#include <stdio.h>
int main(void)
{
    int x1 = 0, x2 = 0;

    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &x1);
    printf("두 번째 정수를 입력하시오: ");
    scanf("%d", &x2);

    printf("몫은 %d이고 나머지는 %d입니다.", (x1 / x2), (x1 % x2));

    return 0;
}