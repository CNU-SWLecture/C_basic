// P160 Programming 3번

#include <stdio.h>
int main(void)
{
    double price, discount;

    printf("상품 가격을 입력하시오: ");
    scanf("%lf", &price);

    printf("할인률을 입력하시오: ");
    scanf("%lf", &discount);

    printf("할인된 가격은 %.2lf입니다.", price * (1 - 0.01 * discount));
    // %.2lf -> double형 값을 소수점 2자리까지만 출력

    return 0;
}