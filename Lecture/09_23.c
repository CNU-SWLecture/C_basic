// #include <stdio.h>
// int main(void)
// {
//     int x = 100, y = 200;
//     int sum = 0;
//     sum = x + y;
//     printf("두 수의 합은 %d입니다.\n", sum);
//     return 0;
// }

#include <stdio.h>
int main(void)
{
    int x;
    printf("숫자를 입력하시오 : ");
    scanf("%d", &x);
    return 0;
}

// printf,  scanf 형식 지정자
// int : %d
// float : %f
// double : %lf
// char(문자): %c
// char(문자열) : %s