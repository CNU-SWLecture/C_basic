// P118 Mini Project

#include <stdio.h>
int main(void)
{
    int age = 0, id = 0, products = 0;
    double stars = 0.0;
    char c = 'b';

    printf("나이를 입력하시오: ");
    scanf("%d", &age);
    printf("나이: %d\n", age);

    printf("직원 아이디를 입력하시오: ");
    scanf("%d", &id);
    printf("아이다: %d\n", id);

    printf("생산량을 입력하시오: ");
    scanf("%d", &products);
    printf("생산량: %d\n", products);

    printf("별의 개수를 입력하시오: ");
    scanf("%lf", &stars);
    printf("별의 개수: %le\n", stars);

    getchar();
    printf("글자를 입력하시오: ");
    scanf("%c", &c);
    printf("글자: %c\n", c);

    return 0;
}