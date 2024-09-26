#include <stdio.h>
int main(void)
{
    int x = 0, y = 0;
    int sum = 0;

    printf("첫 번째 숫자를 입력하시오: ");
    scanf("%d", &x);
    printf("두 번째 숫자를 입력하시오: ");
    scanf("%d", &y);

    // 또 다른 풀이
    // printf("더할 두 숫자를 입력하시오: ");
    // scanf("%d%d", &x, &y);

    sum = x + y;
    printf("두 수의 합 =%d", sum);

    return 0;
}

